/*
Insomnia cure
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, total = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
            total++;
        else if (i % l == 0)
            total++;
        else if (i % m == 0)
            total++;
        else if (i % n == 0)
            total++;
    }
    cout << total;

    return 0;
}