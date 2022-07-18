/*
Array with Odd Sum
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, a, even(0);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
                even++;
        }
        if ((even == 0 && n % 2 == 0) || even == n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}