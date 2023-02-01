/*
Atilla's Favorite Problem
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        char c;
        char maxi = 'a';
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> c;
            maxi = max(maxi, c);
        }
        cout << (maxi - 'a') + 1 << endl;
    }
    return 0;
}