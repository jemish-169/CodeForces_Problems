/*
TL
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
    int a[x], b[y];
    for (int i = 0; i < x; i++)
        cin >> a[i];
    for (int i = 0; i < y; i++)
        cin >> b[i];
    mini = *min_element(a, a + x);
    maxi = *max_element(a, a + x);
    maxi = max(2 * mini, maxi);
    if (*min_element(b, b + y) > maxi)
        cout << maxi;
    else
        cout << -1;
    return 0;
}