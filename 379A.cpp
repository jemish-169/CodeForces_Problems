/*
New Year Candles
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, flag(0), n, b;
    cin >> a >> b;
    n = a;
    while (a / b)
    {
        flag += a / b;
        int x = a % b;
        a /= b;
        a += x;
    }
    cout << n + flag;
    return 0;
}