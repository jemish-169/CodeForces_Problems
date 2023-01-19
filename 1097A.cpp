/*
Gennady and a Card Game
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 5;
    string s, str;
    cin >> s;
    bool b = true;
    while (cases--)
    {
        cin >> str;
        if (s[0] == str[0] || s[1] == str[1])
        {
            cout << "YES" << endl;
            b = false;
            break;
        }
    }
    if (b)
        cout << "NO" << endl;
    return 0;
}