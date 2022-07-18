/*
Interesting drink
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j, data, flag(0), q;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> data;
        int ans = upper_bound(a, a + n, data) - a;
        cout << ans << endl;
    }
    return 0;
}