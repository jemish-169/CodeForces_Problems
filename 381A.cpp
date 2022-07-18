/*
Sereja and Dima
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int a[cases];
    for (int i = 0; i < cases; i++)
        cin >> a[i];
    int i = 0, j = 0, sereja = 0, dima = 0, q = cases;
    cases--;
    while (j != q)
    {
        int x;
        if (a[i] >= a[cases])
        {
            x = a[i];
            i++;
        }
        else
        {
            x = a[cases];
            cases--;
        }
        if (j % 2 == 0)
            sereja += x;
        else
            dima += x;
        j++;
    }
    cout << sereja << " " << dima;
    return 0;
}