/*
Is It a cat?
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int n, i = 0;
        string s;
        cin >> n >> s;
        if (i < n && (s[i] == 'm' || s[i] == 'M'))
            while (i < n && (s[i] == 'm' || s[i] == 'M'))
                i++;
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (i < n && (s[i] == 'e' || s[i] == 'E'))
            while (i < n && (s[i] == 'E' || s[i] == 'e'))
                i++;
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (i < n && (s[i] == 'o' || s[i] == 'O'))
            while (i < n && (s[i] == 'o' || s[i] == 'O'))
                i++;
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (i < n && (s[i] == 'W' || s[i] == 'w'))
            while (i < n && (s[i] == 'W' || s[i] == 'w'))
                i++;
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (i == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}