/*
Wrong Substraction
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i, j;
    cin >> i >> j;
    for (int k = 0; k < j; k++)
    {
        if (i % 10 != 0)
        {
            i--;
        }
        else
        {
            i /= 10;
        }
    }
    cout << i;

    return 0;
}