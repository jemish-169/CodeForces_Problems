/*
Expression
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, max = 0, c;
    cin >> a >> b >> c;
    max = a + b + c;

    if (max < a * b * c)
        max = a * b * c;

    if (max < a + b * c)
        max = a + b * c;

    if (max < a * b + c)
        max = a * b + c;

    if (max < a * (b + c))
        max = a * (b + c);

    if (max < (a + b) * c)
        max = (a + b) * c;

    cout << max;

    return 0;
}