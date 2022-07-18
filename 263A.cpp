/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5], i, j, temp, count = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
                goto jemish;
        }
    }
jemish:
    cout << i << j; /*
    while (a[2][2] != 1)
    {
        if (i < 2)
        {
            for (int k = 0; k < 5; k++)
            {
                temp = a[i][k];
                a[i][k] = a[i + 1][k];
                a[i + 1][k] = temp;
            }
            i++;
            count++;
        }
        if (i > 2)
        {
            for (int k = 0; k < 5; k++)
            {
                temp = a[i][k];
                a[i][k] = a[i - 1][k];
                a[i - 1][k] = temp;
            }
            i--;
            count++;
        }
        if (j < 2)
        {
            for (int k = 0; k < 5; k++)
            {
                temp = a[k][j];
                a[k][j] = a[k][j + 1];
                a[k][j + 1] = temp;
            }
            j++;
            count++;
        }
        if (j > 2)
        {
            for (int k = 0; k < 5; k++)
            {
                temp = a[k][j];
                a[k][j] = a[k][j - 1];
                a[k][j - 1] = temp;
            }
            j--;
            count++;
        }
    } /*
     for (i = 0; i < 5; i++)
     {
         for (j = 0; j < 5; j++)
         {
             cout << a[i][j];
         }
         cout << "\n";
     }
     cout << "\n\n"*/
    cout << count;
    return 0;
}