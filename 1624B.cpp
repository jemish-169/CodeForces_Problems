/*
make ap
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
        int a, b, c;
        cin >> a >> b >> c;

        int na = b - (c - b);
        if (na >= a && na % a == 0 && na != 0)
        {
            cout << "YES" << endl;
            continue;
        }

        int nb = a + (c - a) / 2;
        if (nb >= b && (c - a) % 2 == 0 && nb % b == 0 && nb != 0)
        {
            cout << "YES" << endl;
            continue;
        }

        int nc = a + 2 * (b - a);
        if (nc >= c && nc % c == 0 && nc != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}