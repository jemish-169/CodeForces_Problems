/*
mishka and games
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, a, b, sumA(0), sumB(0);
    cin >> cases;
    while (cases--)
    {
        cin >> a >> b;
        if (a < b)
            sumB++;
        if (a > b)
            sumA++;
    }
    if (sumA < sumB)
        cout << "Chris";
    if (sumA > sumB)
        cout << "Mishka";
    if (sumA == sumB)
        cout << "Friendship is magic!^^";
    return 0;
}