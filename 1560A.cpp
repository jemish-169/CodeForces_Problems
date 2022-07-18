/*
Dislikes of threes
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, data, y = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        for (int i = 1; i <= data; i++)
        {
            y++;
        jemish:
            if (y % 3 == 0 || y % 10 == 3)
            {
                y++;
                goto jemish;
            }
        }
        cout << y << endl;
        y = 0;
    }

    return 0;
}