/*
Kana and Dragon Quest game
*/
#include <bits/stdc++.h>
using namespace std;
int Void_Absorption(int x)
{
    return (x / 2 + 10);
}
int lighting_strike(int x)
{
    return (x - 10);
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        while (a >= 20 && b--)
            a = Void_Absorption(a);
        while (a >= 0 && c--)
            a = lighting_strike(a);

        if (a <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}