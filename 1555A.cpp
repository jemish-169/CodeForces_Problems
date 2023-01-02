/*
PizzaForces
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
    while (cases--)
    {
        int x;
        cin >> x;
        int s;
        s = x / 6;
        if (x <= 6)
        {
            cout << 15 << endl;
            continue;
        }
        if ((x % 6) == 1 || (x % 6) == 2)
        {
            cout << (s - 1) * 15 + 20 << endl;
            continue;
        }
        else if ((x % 6) == 3 || (x % 6) == 4)
        {
            cout << (s - 1) * 15 + 25 << endl;
            continue;
        }
        else if ((x % 6) == 5)
        {
            cout << (s + 1) * 15 << endl;
            continue;
        }
        cout << s * 15 << endl;
    }
    return 0;
}