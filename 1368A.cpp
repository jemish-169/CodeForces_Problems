/*
C+=
*/
#include <bits/stdc++.h>
#include <iostream>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max(a, b), sum = a + b, ans = 0;
        while (c >= maxi)
        {
            int x = sum;
            sum += maxi;
            maxi = x;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}