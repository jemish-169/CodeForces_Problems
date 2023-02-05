/*
Distinct Split
*/
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, ans(0);
        string s;
        cin >> n >> s;
        vector<int> cnt(26, 0), p(26, 0);
        for (auto i : s)
            ++cnt[i - 'a'];
        for (auto i : s)
        {
            --cnt[i - 'a'];
            ++p[i - 'a'];
            int cur = 0;
            for (int i = 0; i < 26; i++)
                cur += min(1, cnt[i]) + min(1, p[i]);
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
    return 0;
}