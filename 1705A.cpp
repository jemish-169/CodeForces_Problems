/*
Mark the Photographer
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        bool b = true;
        int n, x;
        cin >> n >> x;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];
        sort(a, a + 2 * n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] + x > a[i + n])
            {
                b = false;
                break;
            }
        }
        cout << (b ? "YES" : "NO") << endl;
    }
    return 0;
}