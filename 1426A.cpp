/*
Floor Number
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
        float n, x;
        cin >> n >> x;
        if (n <= 2)
            cout << 1 << endl;
        else if (n <= x)
            cout << 2 << endl;
        else
        {
            n = n - 2;
            n = ceil(n / x);
            cout << n + 1 << endl;
        }
    }
    return 0;
}