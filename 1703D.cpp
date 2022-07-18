/*
Double Strings
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
        int x;
        cin >> x;
        string s[x];
        for (int i = 0; i < x; i++)
            cin >> s[i];
        sort(s, s + x);
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                for (int k = 0; k < x; k++)
                    if (s[i] == s[j] + s[k])
                    {
                        cout << 1;
                        break;
                    }
            }
        }
        cout << endl;
    }
    return 0;
}