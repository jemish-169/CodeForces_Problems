/*
Buy a shovel
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1, num, coins;
    cin >> num >> coins;
    while (true)
    {
        int x = num * i;
        int y = x % 10;
        if (y == coins || y == 0)
            break;
        else
            i++;
    }
    cout << i;

    return 0;
}