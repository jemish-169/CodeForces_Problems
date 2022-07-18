/*
Fox And Snake
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, x = 1;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < b; j++)
                cout << "#";
        else if (x % 2 == 0)
        {
            cout << "#";
            x++;
            for (int j = 0; j < b - 1; j++)
                cout << ".";
        }
        else
        {
            x++;
            for (int j = 0; j < b - 1; j++)
                cout << ".";
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}