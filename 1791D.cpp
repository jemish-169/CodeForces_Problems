/*
Distinct Split
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
        int x;
        string s;
        cin >> x >> s;
        set<char> st, str;
        for (auto i : s)
        {
            if (st.find(i) == st.end())
                st.insert(i);
            else
                str.insert(i);
        }
        cout << st.size() + str.size() << endl;
    }
    return 0;
}