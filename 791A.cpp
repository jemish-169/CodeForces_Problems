/*
boys and bear
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, a, b;
    cin >> a >> b;
    for (int j = 0; a <= b; j++)
    {
        a = a * 3;
        b = b * 2;
        i++;
    }
    cout << i;
    return 0;
}