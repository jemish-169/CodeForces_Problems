/*
 Increase and Decrease
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int even = 0;
int odd = 0;
int32_t main()
{
    int pas = 0, cases = 1, b;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> b;
        pas += b;
    }
    if (pas % cases != 0)
        cout << cases - 1;
    else
        cout << cases;
    return 0;
}