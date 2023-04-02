/*
Beautiful sequence
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool b = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= i + 1)
            {
                cout << ("YES") << endl;
                b = false;
                break;
            }
        }
        if (b)
            cout << ("NO") << endl;
    }
    return 0;
}