/*
Normal Problem
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        string s, t;
        cin >> s;
        t = s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'p')
                t[n - i - 1] = 'q';
            else if (s[i] == 'q')
                t[n - i - 1] = 'p';
            else
                t[n - i - 1] = 'w';
        }
        cout << t << endl;
    }
    return 0;
}