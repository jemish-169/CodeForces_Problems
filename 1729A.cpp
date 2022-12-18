/*
Two Elevators
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
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = abs(a - 1), d2 = abs(b - c) + abs(c - 1);
        if (d1 < d2)
            cout << 1 << endl;
        else if (d1 > d2)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}