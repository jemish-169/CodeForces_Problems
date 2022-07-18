/*
cut ribben
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res, maxi(0), sum(0), a, b, c;
    cin >> n >> a >> b >> c;
    for (int i = 0; a * i <= n; i++)
    {
        for (int j = 0; a * i + b * j <= n; j++)
        {
            if ((n - a * i - b * j) % c == 0)
            {
                res = (n - a * i - b * j) / c;
                sum = i + j + res;
                maxi = max(maxi, sum);
            }
        }
    }
    cout << maxi << endl;
    return 0;
}