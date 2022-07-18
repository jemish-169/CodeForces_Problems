/*
football
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<string, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    string s;
    int cases = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> s;
        mp[s]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second > maxi)
        {
            s = i->first;
            maxi = i->second;
        }
    }
    cout << s << endl;
    return 0;
}