/*
Three dors
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
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int i, key, a[3];
        cin >> key >> a[0] >> a[1] >> a[2];
        for (i = 0; i < 3; i++)
        {
            if (key == 0)
                break;
            key = a[key - 1];
        }
        cout << (i == 3 ? "YES" : "NO") << endl;
    }
    return 0;
}