/*
Choosing time
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, flag = 0;
    cin >> n >> m;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 3; i <= n; i += 3)
    {
        // cout << a[i];
        if (a[i] + m < 6)
            flag++;
    }
    cout << flag;
    return 0;
}