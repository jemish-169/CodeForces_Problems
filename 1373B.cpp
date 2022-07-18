/*
01 Game
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
        int ct1(0), ct0(0);
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
                ct0++;
            if (s[i] == '1')
                ct1++;
        }
        int ans = min(ct0, ct1);
        cout << (ans % 2 == 1 ? "DA" : "NET") << endl;
    }
    return 0;
}