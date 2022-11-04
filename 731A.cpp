/*
Night at the Museum
*/
#include <bits/stdc++.h>
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
    // cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        cnt += min(abs(s[0] - 'a'), abs(26 - abs(s[0] - 'a')));

        for (int i = 1; i < s.size(); i++)
        {
            int x = abs(s[i] - s[i - 1]);
            cnt += min(x, abs(26 - x));
        }
        cout << cnt;
    }
    return 0;
}