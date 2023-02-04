/*
Codeforces Checking
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

    int cases = 1;
    cin >> cases;
    string s = "codeforces";
    set<char> str(s.begin(), s.end());
    while (cases--)
    {
        char c;
        cin >> c;
        if (str.find(c) == str.end())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}