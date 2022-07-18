/*
Most Unstable Array
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
        if (a < 2)
            cout << "0" << endl;
        else if (a == 2)
            cout << b << endl;
        else
            cout << b * 2 << endl;
    }

    return 0;
}