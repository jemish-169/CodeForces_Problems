/*
Fafa and his Company
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, flag(0);
    cin >> num;
    for (int i = 1; i <= num / 2; i++)
    {
        int x = num - i;
        if (x % i == 0)
            flag++;
    }
    cout << flag;
    return 0;
}