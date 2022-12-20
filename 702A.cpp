/*
Maximum Increase
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

    int cases = 1, ans = 1;
    cin >> cases;
    vector<int> vec(cases);
    for (int i = 0; i < cases; i++)
        cin >> vec[i];
    for (int i = 0; i < cases; i++)
    {
        int j = 1;
        while (i < cases - 1 && vec[i] < vec[i + 1])
        {
            j++;
            i++;
        }
        ans = max(ans, j);
    }
    cout << ans;
    return 0;
}