/*
Divisibility Problem
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, flag = 0, a, b;
    cin >> num;
    while (num--)
    {
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }

    return 0;
}