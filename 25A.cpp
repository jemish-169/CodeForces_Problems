/*
IQ test
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n], even = 0, odd = 0, flag1, flag2;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
            flag1 = i + 1;
        }
        else
        {
            odd++;
            flag2 = i + 1;
        }
    }
    if (even > odd)
        cout << flag2;
    else
        cout << flag1;
    return 0;
}