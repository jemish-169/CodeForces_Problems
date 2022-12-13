/*
Roma and Lucky Numbers
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1, ans = 0, k;
    string x;
    cin >> cases >> k;
    while (cases--)
    {
        cin >> x;
        int cnt = 0;
        for (auto i : x)
            if (i == '4' || i == '7')
                cnt++;
        if (cnt <= k)
            ans++;
    }
    cout << ans;
    return 0;
}