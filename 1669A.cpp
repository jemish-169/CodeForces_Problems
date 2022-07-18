/*
Division
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, data;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        if (data >= 1900)
            cout << "Division 1" << endl;
        else if (data >= 1600 && data <= 1899)
            cout << "Division 2" << endl;
        else if (data >= 1400 && data <= 1599)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}