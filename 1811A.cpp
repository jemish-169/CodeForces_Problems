/*
Insert Digit
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
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        bool b = true;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] - '0' >= d)
            {
                cout << s[i];
            }
            else
            {
                cout << d;
                for (int j = i; j < n; ++j)
                {
                    cout << s[j];
                }
                cout << '\n';
                b = false;
                break;
            }
        }
        if (b)
            cout << d << '\n';
    }
    return 0;
}