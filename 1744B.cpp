/*
Even-Odd Increments
*/
#include <bits/stdc++.h>
#define int unsigned int
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, q;
        cin >> x >> q;
        int a[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        for (int j = 0; j < q; j++)
        {
            int m, n;
            cin >> m >> n;
            for (int i = 0; i < x; i++)
            {
                if (a[i] % 2 == 1 && m)
                    a[i] += n;
                if (a[i] % 2 == 0 && !m)
                    a[i] += n;
            }
            int z = accumulate(a, a + x, 0);
            cout << z << endl;
        }
    }
    return 0;
}