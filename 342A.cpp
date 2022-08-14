/*
Xenia and Divisors
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
    mp[1] = 0;
    mp[2] = 0;
    mp[3] = 0;
    mp[4] = 0;
    mp[6] = 0;
    vector<string> str;
    int cases = 1, data;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> data;
        if (data == 5 || data == 7)
        {
            cout << -1;
            return 0;
        }
        else
            mp[data]++;
    }
    if (mp[3])
    {
        if (mp[1] >= mp[3] && mp[6] >= mp[3])
        {
            for (int i = 0; i < mp[3]; i++)
                str.push_back("1 3 6");
            mp[1] -= mp[3];
            mp[6] -= mp[3];
        }
        else
        {
            cout << -1;
            return 0;
        }
    }
    if (mp[4])
    {
        if (mp[1] >= mp[4] && mp[2] >= mp[4])
        {
            for (int i = 0; i < mp[4]; i++)
                str.push_back("1 2 4");
            mp[1] -= mp[4];
            mp[2] -= mp[4];
        }
        else
        {
            cout << -1;
            return 0;
        }
    }
    if (mp[1] == mp[2] && mp[1] == mp[6])
    {
        for (int i = 0; i < mp[1]; i++)
            str.push_back("1 2 6");
    }
    else
    {
        cout << -1;
        return 0;
    }
    for (auto i : str)
        cout << i << endl;
    return 0;
}