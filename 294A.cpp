/*
Shaass and Oskols
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
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int x, p, q;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> p >> q;
            a[p - 1] += q - 1;
            a[p + 1] += a[p] - q;
            a[p] = 0;
        }
        for (int i = 1; i <= n; i++)
            cout << a[i] << endl;
    }
    return 0;
}