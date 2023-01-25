/*
LCM
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
        int x;
        cin >> x;
        int a = 1;
        for (int i = 2; i * i <= x; ++i)
        {
            if (x % i == 0)
            {
                a = x / i;
                break;
            }
        }
        cout << a << " " << x - a << endl;
    }
    return 0;
}