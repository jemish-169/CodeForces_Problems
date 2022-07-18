/*
Vanya and Cubes
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n(0), i;
    cin >> x;
    for (i = 1; n < x; i++)
    {
        n += (i * (i + 1) / 2);
    }
    if (n > x)
        cout << i - 2;
    if (n == x)
        cout << i - 1;
    return 0;
}