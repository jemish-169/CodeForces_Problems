/*
Jzzhu and Children
*/
#include <bits/stdc++.h>
using namespace std;
map<int, int> s1;
int main()
{
    int j = 0, n, m;
    cin >> n >> m;
    int maxi = -1, a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    if (maxi % m == 0)
    {
        j = maxi / m;
        j--;
    }
    else
        j = maxi / m;
    int x = j * m;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - x <= 0)
            a[i] = 0;
        else
            a[i] -= x;
    }
    for (int i = n - 1; i >= 0; i--)
        if (a[i] != 0)
        {
            cout << i + 1;
            break;
        }
    return 0;
}