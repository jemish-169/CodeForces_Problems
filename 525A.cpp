/*
Vitaliy and Pie
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<char, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    for (char a = 'a'; a <= 'z'; a++)
        mp[a] = 0;
    int n, cnt = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (i % 2 == 0)
            mp[str[i]]++;
        else
        {
            if (mp[str[i] + 32] == 0)
                cnt++;
            else
                mp[str[i] + 32]--;
        }
    }
    cout << cnt;
    return 0;
}