/*
Calculating Function
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int j, res = 0, i;
    cin >> i;

    if (i % 2 == 1)
    {
        i += 1;
        cout << -i / 2;
    }
    else
        cout << i / 2;
    return 0;
}