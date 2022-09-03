/*
Vitaly and Night
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = 0;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int n, m, a, b;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a >> b;
                if (!(a == 0 && b == 0))
                    mini++;
            }
        }
        cout << mini;
    }
    return 0;
}