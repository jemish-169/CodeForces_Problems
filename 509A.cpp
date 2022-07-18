/*
Maximum in table
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
        cout << a[n - 1][n - 1];
    }
    return 0;
}