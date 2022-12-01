/*
Line to Cashier
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    vector<int> vec(cases);
    for (int i = 0; i < cases; i++)
        cin >> vec[i];
    int fin = INT_MAX;
    for (auto i : vec)
    {
        int x, sum = 0;
        for (int j = 0; j < i; j++)
        {
            cin >> x;
            sum += x;
        }
        if ((sum * 5) + i * 15 < fin)
        {
            fin = (sum * 5) + i * 15;
        }
    }
    cout << fin << endl;
    return 0;
}