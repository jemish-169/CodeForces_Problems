/*
Drinks
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float res, sum = 0, num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> res;
        sum += res;
    }
    cout << sum / num;
    return 0;
}