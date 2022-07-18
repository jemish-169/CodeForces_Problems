/*
Multiply by 2, divide by 6
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int num, i(1), flag2(0), flag3(0);
        cin >> num;
        while (num % 2 == 0)
        {
            ++flag2;
            num /= 2;
        }
        while (num % 3 == 0)
        {
            ++flag3;
            num /= 3;
        }
        if (num == 1 && flag2 <= flag3)
            cout << 2 * flag3 - flag2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}