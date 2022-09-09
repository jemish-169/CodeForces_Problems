/*
Sereja and Mugs
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

    int data, x = 0, cases = 1, v;
    cin >> cases >> v;
    while (cases--)
    {
        cin >> data;
        x += data;
        maxi = max(maxi, data);
    }
    if (x - maxi <= v)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}