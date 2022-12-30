/*
Luntik and Subsequences
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
typedef long long ll;
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
        int x, t, cnt0(0), cnt1(0);
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            if (t == 1)
                cnt1++;
            if (t == 0)
                cnt0++;
        }
        cout << (1ll << cnt0) * (ll)cnt1 << endl;
    }
    return 0;
}