/*
New Year's Number
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int data;
        cin >> data;
        int div = data / 2020;
        int mod = data % 2020;
        if (mod >= 0 && mod <= div)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}