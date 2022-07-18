/*
Black Square
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], flag = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '1')
            flag += a[0];
        else if (s[i] == '2')
            flag += a[1];
        else if (s[i] == '3')
            flag += a[2];
        else if (s[i] == '4')
            flag += a[3];
    cout << flag;
    return 0;
}