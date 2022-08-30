/*
LLPS
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<char, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;
    for (int i = 0; i < mp.rbegin()->second; i++)
        cout << mp.rbegin()->first;
    return 0;
}