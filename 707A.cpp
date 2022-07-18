/*
Brain's photos
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char data;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> data;
            if (!(data == 'B' || data == 'W' || data == 'G'))
            {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";

    return 0;
}