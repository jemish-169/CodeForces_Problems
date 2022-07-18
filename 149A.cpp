/*
business trip
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12);
    int i, sum = 0;
    for (i = 11; i >= 0 && sum < n; i--)
        sum += a[i];
    int x = 12 - i - 1;
    sum >= n ? cout << x : cout << -1;
    return 0;
}