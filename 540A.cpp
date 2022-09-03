/*
Combination Lock
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = 0;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int x;
        string s1, s2;
        cin >> x >> s1 >> s2;
        for (int i = 0; i < x; i++)
            mini += min(abs(s1[i] - s2[i]), abs(10 - abs(s1[i] - s2[i])));

        cout << mini;
    }
    return 0;
}