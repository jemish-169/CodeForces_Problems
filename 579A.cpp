/*
Rising bactria
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i, flag = 0;
    cin >> x;
    while (x)
    {
        i = 1;
        while (i <= x)
            i *= 2;
        flag++;
        i /= 2;
        x = x - i;
    }
    cout << flag << endl;
    return 0;
}