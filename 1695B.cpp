/*
Circle game
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int mini = INT_MAX;
        int n, a, k;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            // mini = min(mini, a);
            if (a <= mini)
            {
                k = i;
                mini = a;
            }
        }
        if (k % 2 == 0)
            cout << "Mike" << endl;
        else
            cout << "Joe" << endl;
    }
    return 0;
}