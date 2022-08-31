/*
 Spell Check
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
    string st, str = "Timur";
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x >> st;
        sort(st.begin(), st.end());
        // cout << st << endl;

        if ("Timru" == st)
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}