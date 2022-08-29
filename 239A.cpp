/*
Two Bags of Potatoes
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
    int y, k, n;
    cin >> y >> k >> n;
    int x = k - y % k;
    int top = n - y;
    if (x <= top)
    {
        while (x <= top)
        {
            cout << x << " ";
            x += k;
        }
    }
    else
        cout << -1;
    return 0;
}