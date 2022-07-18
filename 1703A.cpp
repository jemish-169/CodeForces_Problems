/*
YES or YES?
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
    cin >> cases;
    while (cases--)
    {
        string sl;
        cin >> sl;
        transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
        cout << (sl == "yes" ? "YES" : "NO") << endl;
    }
    return 0;
}