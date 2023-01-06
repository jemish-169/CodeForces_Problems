/*
Winner
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> mp;
    int n, cases = 1;
    cin >> cases;
    string s;
    while (cases--)
    {
        cin >> s >> n;
        mp[s] += n;
    }
    int maxi = 0;
    for (auto i : mp)
    {
        if (maxi < i.second)
        {
            s = i.first;
            maxi = i.second;
        }
    }
    cout << s << endl;
    return 0;
}