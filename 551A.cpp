/*
GukiZ and Contest
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
// vector<int, int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int x, j = 0;
        cin >> x;
        int a[x], b[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        copy(a, a + x, b);
        sort(a, a + x, greater<int>());
        for (int i = 0; i < x; i++)
            if (mp[a[i]] == 0)
                mp[a[i]] = i + 1;
        for (int i = 0; i < x; i++)
            cout << mp[b[i]] << " ";
    }
    return 0;
}