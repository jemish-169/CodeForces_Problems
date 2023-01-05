/*
 Linear Keyboard
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
        unordered_map<int, int> mp;
        string s, str;
        cin >> s >> str;
        for (int i = 0; i < s.length(); i++)
            mp[s[i]] = i;
        int ans = 0;
        for (int i = 1; i < str.length(); i++)
        {
            ans += abs(mp[str[i]] - mp[str[i - 1]]);
        }
        cout << ans << endl;
    }
    return 0;
}