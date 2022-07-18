/*
Two arrays and swaps
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
        int x[a], y[a];
        for (int i = 0; i < a; i++)
            cin >> x[i];
        for (int i = 0; i < a; i++)
            cin >> y[i];
        sort(x, x + a);
        sort(y, y + a);
        for (int i = 0; i < b; i++)
            if (x[i] < y[a - i - 1])
                x[i] = y[a - i - 1];
        cout << accumulate(x, x + a, 0) << endl;
    }
    return 0;
}