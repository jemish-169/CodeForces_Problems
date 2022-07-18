/*
required reminder
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, a, n, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> n;
        if ((n - (n % a) + b) <= n)
            cout << n - (n % a) + b << endl;
        else
            cout << n - (n % a) + (b - a) << endl;
    }
    return 0;
}