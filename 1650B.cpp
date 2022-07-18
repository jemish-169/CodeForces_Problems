/*
DIV + MOD
*/
#include <bits/stdc++.h>
using namespace std;
int solve(void)
{
    int l, r, x;
    cin >> l >> r >> x;
    int ans = r / x + r % x;
    int m = r / x * x - 1;
    if (m >= l)
        ans = max(ans, m / x + m % x);
    cout << ans;
    return 0;
}
int main()
{
    int l, r, max = 0, a, num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        solve();
        cout << endl;
    }
    return 0;
}