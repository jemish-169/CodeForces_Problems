/*
Kitahara Haruki's Gift
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
    int cases = 1, a, sum = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> a;
        sum += a;
    }
    if (sum / 200 == cases && cases % 2 == 1)
        cout << "NO";
    else
        cout << (sum % 200 == 0 && cases > 1 ? "YES" : "NO");
    return 0;
}