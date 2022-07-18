/*
HQ9+
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        if (str.at(i) == 'H' || str.at(i) == 'Q' || str.at(i) == '9')
        {
            cout << "YES";
            break;
        }
    }
    if (i == str.length())
        cout << "NO";
    return 0;
}