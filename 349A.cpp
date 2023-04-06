/*
Cinema Line
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
    int v, res = 0;
    while (cases--)
    {
        cin >> v;
        v -= 25;
        res -= v;
        if (res < 0)
        {
            cout << "NO";
            return 0;
        }
    }
    if (res < 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}