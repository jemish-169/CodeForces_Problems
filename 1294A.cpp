/*
Collecting Coins
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int x = max(a, max(b, c));
        int y = a + b + c;
        x *= 3;
        y = x - y;
        n = n - y;
        n % 3 == 0 && n >= 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}