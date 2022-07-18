/*
Social Distance
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int m, n;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int maxi[n];
        for (int i = 0; i < n - 1; i++)
            maxi[i] = max(a[i], a[i + 1]);
        maxi[n - 1] = max(a[0], a[n - 1]);
        cout << ((n + accumulate(maxi, maxi + n, 0) <= m) ? "YES" : "NO") << endl;
    }
    return 0;
}