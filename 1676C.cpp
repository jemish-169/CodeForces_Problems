/*
Most Similar Words
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, mini(10e7), sum(0), b;
        cin >> a >> b;
        string s[a];
        for (int i = 0; i < a; i++)
            cin >> s[i];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i != j)
                {
                    sum = 0;
                    for (int k = 0; k < b; k++)
                    {
                        sum += abs(s[i][k] - s[j][k]);
                    }
                    mini = min(mini, sum);
                }
            }
        }
        cout << mini << endl;
    }

    return 0;
}