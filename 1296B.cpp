/*
Food buying
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        int ans = 0;
        int pw = 1000 * 1000 * 1000;
        while (x > 0)
        {
            while (x < pw)
                pw /= 10;
            ans += pw;
            x -= pw - pw / 10;
        }
        cout << ans << endl;
    }
    return 0;
}