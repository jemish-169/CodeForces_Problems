/*
 Lucky Division
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, i, j;
    cin >> j;
    int cpy = j;
    for (i = 0; j != 0; i++)
    {
        h = j % 10;
        if (h != 4 && h != 7)
            break;
        j /= 10;
    }
    if (j == 0)
        cout << "YES";
    else if (cpy % 4 == 0 || cpy % 7 == 0 || cpy % 74 == 0 || cpy % 47 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}