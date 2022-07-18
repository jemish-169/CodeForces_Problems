/*
 Make It Increasing
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, x, flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i > 0; i--)
        {
            while (a[i] <= a[i - 1] && a[i - 1] && a[i])
            {
                a[i - 1] /= 2;
                flag++;
            }
        }
        for (x = 0; x < n - 1; x++)
            if (a[x] >= a[x + 1])
                break;
        x == n - 1 ? cout << flag << endl : cout << -1 << endl;
    }
    return 0;
}