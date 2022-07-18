/*
Three Pairwise Maximums
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
        int x, y, z;
        cin >> x >> y >> z;
        if (x > y)
            swap(x, y);
        if (x > z)
            swap(z, x);
        if (z < y)
            swap(z, y);
        if (y == z)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}