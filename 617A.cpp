/*
Steps and elephent
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j = 0, steps;
    cin >> steps;
    while (steps > 0)
    {
        steps -= 5;
        j++;
    }
    cout << j;
    return 0;
}