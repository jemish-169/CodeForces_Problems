/*
Square String
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
        string s;
        cin >> s;
        int i, n = s.length() / 2;
        if (s.length() % 2 == 0)
        {
            for (i = 0; i < n; i++)
            {
                if (s[i] != s[n + i])
                    break;
            }
            if (i == n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}