/*
Food for Animals
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int a, total(0), b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= a;
        y -= b;

        if (x >= 0)
            total += x;
        if (y >= 0)
            total += y;
        total -= c;
        if (total > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}