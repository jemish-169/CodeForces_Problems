/*
Mahmoud and Ehab and the even-odd game
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
    if (cases % 2 == 0)
        cout << "Mahmoud" << endl;
    else
        cout << "Ehab" << endl;
    return 0;
}