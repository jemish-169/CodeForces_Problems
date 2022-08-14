/*
Little Girl and Game
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
    string str;
    int k = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
        mp[str[i]]++;
    for (auto i : mp)
        if (i.second % 2 == 1)
            k++;
    if (k == 0 || k % 2 == 1)
        cout << "First";
    else
        cout << "Second";
    return 0;
}