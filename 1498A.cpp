/*
GCD Sum
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
int gcdSum(int x)
{
    int y = x, sum(0);
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return __gcd(sum, y);
}
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
        if (gcdSum(x) > 1)
            cout << x << endl;
        else if (gcdSum(x + 1) > 1)
            cout << x + 1 << endl;
        else if (gcdSum(x + 2) > 1)
            cout << x + 2 << endl;
    }
    return 0;
}