/*
A. Vus the Cossack and a Contest

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

    int cases = 1, m, n;
    cin >> cases >> m >> n;
    if (cases <= m && cases <= n)
        cout << "yes"
             << "\n";
    else
        cout << "no"
             << "\n";

    return 0;
}