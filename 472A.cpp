/*
design tutorial : learn from math
*/
#include <bits/stdc++.h>
using namespace std;
bool composite(int y)
{
    int i;
    for (i = 2; i < y; i++)
        if (y % i == 0)
        {
            return true;
            break;
        }
    if (i == y)
        return false;
    else
        return true;
}
int main()
{
    int num;
    cin >> num;
    int x = 4;
    while (!(composite(x) && composite(num - x)))
        x += 2;
    cout << x << " " << num - x;

    return 0;
}