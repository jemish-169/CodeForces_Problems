/*
Unlucky ticket
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
    // cin >> cases;
    while (cases--)
    {
        size_t n;
        string s, l, r;
        cin >> n >> s;
        l = s.substr(0, n);
        r = s.substr(n, n);
        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        // cout << l << " " << r << endl;
        bool strictly_less(true), strictly_more(true);
        for (size_t i = 0; i < n; ++i)
        {
            if (l[i] >= r[i])
            {
                strictly_less = false;
                break;
            }
        }
        for (size_t i = 0; i < n; ++i)
        {
            if (l[i] <= r[i])
            {
                strictly_more = false;
                break;
            }
        }
        cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
    }
    return 0;
}