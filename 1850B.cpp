/*
Ten words of wisdom
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
        int res(0), maxi = INT_MIN, x, y;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (x <= 10 && y > maxi)
                res = i, maxi = y;
        }
        cout << ++res << "\n";
    }
    return 0;
}