/*
Boys and Girls
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

    int a, b;
    cin >> b >> a;
    while (a > 0 && b > 0)
    {
        if (b--)
            cout << "B";
        if (a--)
            cout << "G";
    }
    while (--b >= 0)
        cout << "B";
    while (--a >= 0)
        cout << "G";
    return 0;
}