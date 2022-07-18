/*
 Panoramix's Prediction
*/
#include <bits/stdc++.h>
using namespace std;
bool prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, m, i;
    cin >> n >> m;
    if (n == 2 && m == 3)
        cout << "YES" << endl;
    else
    {
        for (i = n + 2; i <= m; i += 2)
            if (prime(i) == true)
                break;
        if (i == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}