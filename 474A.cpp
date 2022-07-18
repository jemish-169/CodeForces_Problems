/*
Keyboard
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./", str;
    char c;
    int p;
    cin >> c >> str;
    c == 'R' ? p = -1 : p = 1;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == str[i])
            {
                cout << s[j + p];
                break;
            }
        }
    }
    return 0;
}