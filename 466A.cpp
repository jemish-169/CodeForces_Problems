/*
Chaeap travel
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a, b, rides = 0, sum = 0;
    cin >> n >> m >> a >> b;
    double x = a, y = b / m;
    while (y < x && n > rides)
    {
        sum += b;
        rides += m;
    }
    double sum2 = 0, rides2 = 0;
    while (y < x && n - m > rides2)
    {
        sum2 += b;
        rides2 += m;
    }
    if (rides < n)
    {
        sum += (n - rides) * a;
        rides += (n - rides);
    }
    if (rides2 < n)
    {
        sum2 += (n - rides2) * a;
        rides2 += (n - rides2);
    }
    sum < sum2 ? cout << (int)sum : cout << (int)sum2;
    // cout << "RUBLES : " << sum << "\n"
    //      << "RIDES : " << rides << endl;

    return 0;
}