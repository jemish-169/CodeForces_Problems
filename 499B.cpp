/*
Lecture
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<string, string> mp;
list<int> ls;
vector<string> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        string s, st;
        cin >> s >> st;
        mp.insert({s, st});
        mp.insert({st, s});
    }
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        auto it = mp.find(s);
        s = it->first;
        string st = it->second;
        if (s.size() > st.size())
            cout << st << " ";
        else if (st.size() > s.size())
            cout << s << " ";
        else
            cout << s << " ";
    }
    return 0;
}