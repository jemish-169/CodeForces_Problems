/*
Greg's Workout
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

    int cases = 1, c = 0, b = 0, x, bc = 0;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        cin >> x;
        if (i % 3 == 1)
            c += x;
        else if (i % 3 == 2)
            b += x;
        else if (i % 3 == 0)
            bc += x;
    }
    int maxi = max({b, c, bc});
    if (maxi == c)
        cout << "chest" << endl;
    else if (maxi == bc)
        cout << "back" << endl;
    else
        cout << "biceps" << endl;
    return 0;
}