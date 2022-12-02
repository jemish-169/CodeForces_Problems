/*
 Mashmokh and Lights
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
    vector<int> vec(cases, 0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, j;
        cin >> x;
        j = x;
        while (x <= cases && vec[x - 1] == 0)
        {
            vec[x - 1] = j;
            x++;
        }
    }
    for (auto i : vec)
        cout << i << " ";
    return 0;
}