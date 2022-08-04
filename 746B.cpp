/*
Decodeing
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
    int n;
    string str, s;
    cin >> n >> str;
    if (n % 2 == 0)
    {
        s.push_back(str[0]);
        for (int i = 1; i < n; i++)
        {
            if (i % 2 != 0)
                s.push_back(str[i]);
            else
                s = str[i] + s;
        }
    }
    else
    {
        s.push_back(str[0]);
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
                s.push_back(str[i]);
            else
                s = str[i] + s;
        }
    }
    cout << s;
    return 0;
}