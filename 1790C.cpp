/*
Premutation
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
        int a[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> a[i][j];
        }
        int m(0), o(0), q(0), p(0);
        m = a[0][0];
        for (int i = 0; i < n; i++)
            if (a[i][0] == m)
                q = i;
            else
            {
                o++;
                p = i;
            }
        // cout << p << endl;
        if (o == 1)
        {
            cout << m << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[p][i] << " ";
            cout << endl;
        }
        else
        {
            cout << a[1][0] << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[q][i] << " ";
            cout << endl;
        }
    }
    return 0;
}