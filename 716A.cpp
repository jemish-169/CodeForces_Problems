/*
Crazy Computer
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
    int cnt = 1, n, c, x, y;
    cin >> n >> c >> x;
    for (int i = 1; i < n; i++)
    {
        cin >> y;
        if (y - x > c)
            cnt = 1;
        else
            cnt++;
        x = y;
    }
    cout << cnt;
    return 0;
}