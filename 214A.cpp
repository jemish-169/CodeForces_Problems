/*
System for Equations
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
    // cin >> cases;
    while (cases--)
    {
        int n, m, f(0);
        cin >> n >> m;
        mini = min(n, m);
        for (int i = 0; i <= mini; i++)
        {
            for (int j = 0; j <= mini; j++)
            {
                if (i * i + j == n && i + j * j == m)
                    f++;
            }
        }
        cout << f;
    }
    return 0;
}