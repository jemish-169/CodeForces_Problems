/*
stone game
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
        vector<int> v(n);
        for (int &e : v)
        {
            cin >> e;
        }
        int maxPos = max_element(v.begin(), v.end()) - v.begin();
        int minPos = min_element(v.begin(), v.end()) - v.begin();
        cout << min({max(maxPos, minPos) + 1,
                     (n - 1) - min(maxPos, minPos) + 1,
                     (n - 1) - maxPos + minPos + 2,
                     (n - 1) - minPos + maxPos + 2})
             << "\n";
    }
    return 0;
}