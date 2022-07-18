/*
 Petr and Book
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k(0), n, a[7], i(0);
    cin >> n;
    for (int i = 0; i < 7; i++)
        cin >> a[i];
    int sum = accumulate(a, a + 7, 0);
    while (sum * i < n)
        i++;
    n -= (sum * (i - 1));
    while (n > 0)
    {
        n -= a[k];
        k++;
    }
    cout << k;
    return 0;
}