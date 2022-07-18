/*
Pashmak and Flowers
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
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int x, a;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> a;
            mp[a]++;
        }
        auto it = mp.begin();
        auto i = mp.rbegin();
        if (mp.size() == 1)
            cout << 0 << " " << x * (x - 1) / 2;
        else
            cout << (i->first) - (it->first) << " " << i->second * it->second;
    }
    return 0;
}