/*
Increasing
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
        unordered_set<int> st;
        int x, t;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> t;
            st.insert(t);
        }
        if (st.size() == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}