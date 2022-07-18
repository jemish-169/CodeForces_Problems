/*
Polycarp and Coins
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int data = 0;
        cin >> data;
        int x, y;
        x = data / 3;
        y = data - x * 2;
        while (x + 2 * y >= data)
            y--;
        y++;
        x + 2 * y == data ? cout << x << " " << y << endl : cout << y << " " << x << endl;
    }
    return 0;
}