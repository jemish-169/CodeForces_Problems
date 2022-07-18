/*
Holiday of equality
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 0, n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
        flag = flag + (a[n - 1] - a[i]);
    cout << flag;
    return 0;
}