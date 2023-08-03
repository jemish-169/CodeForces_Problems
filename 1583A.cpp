/*
Desorting
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
        int n, x, y, mini = INT_MAX;
        cin >> n;
        cin >> y;
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            mini = min(x - y, mini);
            y = x;
        }
        if (mini < 0)
            cout << 0 << endl;
        else
            cout << mini / 2 + 1 << endl;
    }
    return 0;
}