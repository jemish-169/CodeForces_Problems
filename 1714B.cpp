/*
Remove Prefix
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        set<int> st;
        int x;
        cin >> x;
        int a[x];
        bool b = true;
        for (int i = 0; i < x; i++)
            cin >> a[i];
        for (int i = x - 1; i >= 0; i--)
        {
            if (st.find(a[i]) != st.end())
            {
                cout << i + 1 << endl;
                b = false;
                break;
            }
            else
                st.insert(a[i]);
        }
        if (b)
            cout << 0 << endl;
    }
    return 0;
}