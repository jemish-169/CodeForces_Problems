/*
Nastya and Rice
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
        double a, b, c, d, n;
        cin >> n >> a >> b >> c >> d;
        double x = (c - d) / n;
        double y = (c + d) / n;
        double v = a - b;
        double w = a + b;
        if (x >= v && x <= w)
            cout << "Yes" << endl;
        else if (y >= v && y <= w)
            cout << "Yes" << endl;
        else if (v >= x && v <= y)
            cout << "Yes" << endl;
        else if (w >= x && w <= y)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}