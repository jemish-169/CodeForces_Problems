/*
Cherry
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
    while (cases--)
    {
        int x, maxi = 0, ind = 0;
        cin >> x;
        vector<int> vec(x);
        for (int i = 0; i < x; i++)
        {
            cin >> vec[i];
            if (vec[i] > maxi)
            {
                maxi = vec[i];
                ind = i;
            }
        }
        if (ind == x - 1)
            cout << maxi * vec[ind - 1] << endl;
        else if (ind == 0)
            cout << maxi * vec[ind + 1] << endl;
        else
            cout << max(vec[ind + 1] * maxi, maxi * vec[ind - 1]) << endl;
    }
    return 0;
}