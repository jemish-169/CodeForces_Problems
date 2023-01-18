/*
LCM problem
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
        int a, b;
        cin >> a >> b;
        if (2 * a > b)
            cout << -1 << " " << -1 << endl;
        else
            cout << a << " " << a * 2 << endl;
    }
    return 0;
}