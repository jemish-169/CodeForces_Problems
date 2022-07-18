/*
Letter
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<char, int> mp1;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    // cin >> cases;

    string key, s;
    getline(cin, key);
    getline(cin, s);

    for (int i = 0; i < key.length(); i++)
        mp1[key[i]]++;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp1[s[i]] > 0 || s[i] == ' ')
        {
            mp1[s[i]]--;
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}