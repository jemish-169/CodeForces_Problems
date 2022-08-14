/*
Shooshuns and Sequence
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
        int k, n;
        cin >> n >> k;
        int data[n];
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
            if (i >= k - 1 && data[i] != data[k - 1])
            {
                cout << -1;
                return 0;
            }
        }
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (data[i] != data[k - 1])
                cnt = i + 1;
        }
        cout << cnt;
    }
    return 0;
}