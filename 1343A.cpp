/*
candies
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        for (int pw = 2; pw < 30; ++pw)
        {
            int val = (1 << pw) - 1;
            if (n % val == 0)
            {
                // cerr << val << endl;
                cout << n / val << endl;
                break;
            }
        }
    }
    return 0;
}