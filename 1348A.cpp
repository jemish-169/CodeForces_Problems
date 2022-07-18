/*
Phoenix and Balance
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
            a[i] = pow(2, i + 1);
        int p(0), q(0);
        for (int i = 0; i < (x / 2) - 1; i++)
            p += a[i];
        for (int i = (x / 2) - 1; i < x - 1; i++)
            q += a[i];
        p += a[x - 1];
        // q += a[0];
        cout << abs(p - q) << endl;
    }
    return 0;
}