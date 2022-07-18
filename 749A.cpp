/*
Bachgold Problem
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    if (x % 2 == 1)
    {
        cout << x / 2 << endl;
        for (int i = 0; i < (x / 2) - 1; i++)
            cout << 2 << " ";
        cout << 3;
    }
    else
    {
        cout << x / 2 << endl;
        for (int i = 0; i < (x / 2) - 1; i++)
            cout << 2 << " ";
        cout << 2;
    }

    return 0;
}