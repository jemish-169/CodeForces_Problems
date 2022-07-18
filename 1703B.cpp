/*
ICPC Balloons
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        map<char, int> mp;
        string s;
        int n, sum = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i]) != mp.end())
                ++sum;
            else
            {
                mp[s[i]]++;
                sum += 2;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}