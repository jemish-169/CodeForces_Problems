/*
Even array
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, data, flag2 = 0, cases, flag1 = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> data;

            if (!(i % 2 == data % 2))
                if (data % 2 == 0)
                    flag2++;
                else
                    flag1++;
        }
        if (!(flag1 - flag2))
            cout << flag1 << endl;
        else
            cout << -1 << endl;
        flag2 = 0;
        flag1 = 0;
    }
    return 0;
}