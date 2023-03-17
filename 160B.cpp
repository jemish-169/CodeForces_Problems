/*
Unlucky ticket
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
    // cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s2 = s.substr(n, 2 * n);
        string s1 = s.substr(0, n);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        // cout << s1 << " .. " << s2 << endl;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            // cout << s[i] << endl;
            if (s[i] >= s[n + i])
                a++;
            else
                b++;
        }
        cout << a << " " << b;
        if (b == n || a == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}