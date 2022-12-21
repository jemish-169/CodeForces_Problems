/*
Arithmetic Array
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
        int x, t, sum = 0;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            sum += t;
        }
        if (sum == x)
            cout << 0 << endl;
        else if (sum < x)
            cout << 1 << endl;
        else if (sum > x)
            cout << sum - x << endl;
    }
    return 0;
}