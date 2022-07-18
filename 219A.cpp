/*
k-String
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<char, int> mp;
list<int> ls;
vector<int> vec(26, 0);
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int n = 0;
    string s, str = "";
    cin >> n >> s;
    for (auto c : s)
        vec[c - 'a']++;
    for (int i = 0; i < 26; i++)
        if (vec[i] % n != 0)
        {
            cout << -1;
            return 0;
        }
        else
        {
            int times = vec[i] / n;
            while (times--)
                str.push_back('a' + i);
        }
    string newStr = "";
    while (n--)
        newStr += str;
    cout << newStr;
    return 0;
}