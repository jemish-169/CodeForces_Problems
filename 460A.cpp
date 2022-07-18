/*
Vasya and Socks
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, flag = 0;
    cin >> n >> m;
    int i, j(0);
    for (i = 1; i <= n; i++)
    {
        j++;
        if (j == m)
        {
            n++;
            j = 0;
        }
    }
    cout << i - 1;
    return 0;
}