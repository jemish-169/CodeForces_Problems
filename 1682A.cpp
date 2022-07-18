/*
Palindromic Indices
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, f(0);
        string s;
        cin >> n >> s;
        for (int i = n / 2; i >= 0; i--)
            if (s[i] == s[i - 1])
                f++;
        cout << (f == 0 ? 1 : f * 2) << endl;
    }
    return 0;
}