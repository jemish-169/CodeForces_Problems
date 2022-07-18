/*
Soft drinking
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = (k * l) / nl;
    int peice = c * d;
    int NL = p / np;
    cout << min(x, min(peice, NL)) / n;
    return 0;
}