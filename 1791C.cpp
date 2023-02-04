/*
Prepend and Append
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, x;
        string s;
        cin >> x >> s;
        n = x;
        x /= 2;
        int ans = n;
        for (int i = 0; i < x; i++)
        {
            if ((s[i] - '0' + s[n - i - 1] - '0') == 1)
                ans -= 2;
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}