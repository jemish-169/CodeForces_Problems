/*
Yet another two integers problem
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, a, b, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b;
        m = abs(a - b);
        m % 10 != 0 ? cout << m / 10 + 1 << endl : cout << m / 10 << endl;
    }
    return 0;
}