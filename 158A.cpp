/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, n, num;
    // cout << "start";
    cin >> n >> num;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[num - 1] && a[i] > 0)
        {
            sum++;
        }
    }
    cout << sum;

    return 0;
}