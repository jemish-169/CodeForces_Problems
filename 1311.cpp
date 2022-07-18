/*
Add Odd or Subtract Even
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, b;
        cin >> a >> b;
        if (a - b > 0 && (a - b) % 2 == 1)
            cout << 2 << endl;
        else if (a - b > 0 && (a - b) % 2 == 0)
            cout << 1 << endl;
        else if (a - b < 0 && abs(a - b) % 2 == 1)
            cout << 1 << endl;
        else if (a - b < 0 && abs(a - b) % 2 == 0)
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}