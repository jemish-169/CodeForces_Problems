/*
Odd divisior
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, num, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> num;
        double d = log2(num);
        // cout << d << endl;
        if (d * 100 == (int)d * 100)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}