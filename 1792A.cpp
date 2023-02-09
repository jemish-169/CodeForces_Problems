/*
GamingForces
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
        int n;
        cin >> n;
        int cnt(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt += (x == 1);
        }
        cout << n - cnt / 2 << endl;
    }
    return 0;
}