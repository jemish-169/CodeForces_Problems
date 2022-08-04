/*
Comparing Strings
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
    string s, st;
    int cnt = 0;
    cin >> s >> st;
    for (int i = 0; i < min(st.size(), s.size()); i++)
    {
        if (s[i] != st[i])
            cnt++;
    }
    sort(s.begin(), s.end());
    sort(st.begin(), st.end());
    cout << (cnt == 2 && s == st ? "YES" : "NO");
    return 0;
}