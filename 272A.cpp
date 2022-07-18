/*
Dima and friends
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, sum = accumulate(a, a + n, 0);
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}