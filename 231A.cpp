/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, sum = 0, count = 0;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = a[i][0] + a[i][1] + a[i][2];
        if (sum >= 2)
        {
            count++;
            // cout << count << "\n";
            // cout << sum << "\n";
        }
        sum = 0;
    }
    cout << count;

    return 0;
}