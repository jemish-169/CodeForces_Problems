/*
Same Differences
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
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
        map<int, int> mp;
        int x = 0, res = 0, t;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            t -= i;
            res += mp[t];
            mp[t]++;
        }
        cout << res << endl;
    }
    return 0;
}