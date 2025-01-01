/*
 Hard Problem
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int m, a, b, c, sum = 0;
        cin >> m >> a >> b >> c;
        sum += min(a, m);
        sum += min(b, m);
        int rem = (2 * m) - sum;
        sum += min(rem, c);
        cout << sum << endl;
    }
    return 0;
}