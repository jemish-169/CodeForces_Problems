/*
Equal candies
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, mini(10e7);
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(mini, a[i]);
        }
        cout << accumulate(a, a + n, 0) - mini * n << endl;
    }
    return 0;
}