/*
Vasya the Hipster
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, days = 0, leftout = 0;
    cin >> a >> b;
    int k = min(a, b);
    days = k;
    a -= k;
    b -= k;
    while (a > 1)
    {
        leftout++;
        a -= 2;
    }
    while (b > 1)
    {
        leftout++;
        b -= 2;
    }
    cout << days << " " << leftout;

    return 0;
}