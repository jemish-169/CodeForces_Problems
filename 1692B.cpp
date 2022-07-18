/*
All Distinct
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
        map<int, int> mp;
        int a, n, f1(0), f2(0);
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }
        for (auto i : mp)
        {
            if (i.second >= 2 && i.second % 2 == 0)
                f2++;
            else
                f1++;
        }
        f2 /= 2;
        cout << f1 + f2 * 2 << endl;
    }
    return 0;
}