/*
sale
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, sum = 0, j = 0;
    cin >> m >> n;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    while (sum - a[j] >= sum && n)
    {
        sum -= a[j];
        j++;
        n--;
    }
    cout << sum;
    return 0;
}