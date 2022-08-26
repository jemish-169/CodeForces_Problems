/*
Yaroslav and Permutations
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
    int cases = 1, x;
    cin >> cases;
    int y = cases;
    while (cases--)
    {
        cin >> x;
        mp[x]++;
    }
    for (auto i : mp)
    {
        if (i.second > maxi)
            maxi = i.second;
    }
    if (maxi > (y + 1) / 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}