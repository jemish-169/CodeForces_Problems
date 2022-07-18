/*
Minimal square
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b;
        int y = max(min(a, b) * 2, max(a, b));
        cout << y * y << endl;
    }

    return 0;
}