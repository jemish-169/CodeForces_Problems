/*
Fence
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
    int x, y;
    cin >> x >> y;
    int a[x + 1];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
        if (i)
            a[i] = a[i - 1] + a[i];
    }
    for (int i = 0; i <= x - y; i++)
    {
        if (!i)
        {
            int sum = a[i + y - 1];
            if (sum <= mini)
            {
                mini = sum;
                maxi = i;
            }
        }
        else
        {
            int sum = a[i + y - 1] - a[i - 1];
            if (sum <= mini)
            {
                mini = sum;
                maxi = i;
            }
        }
    }
    cout << maxi + 1;
    return 0;
}