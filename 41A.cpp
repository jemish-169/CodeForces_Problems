/*
Translation
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int len = s2.length();
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1.at(i) != s2.at(len - 1))
        {
            break;
        }
        len--;
    }
    if (len == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}