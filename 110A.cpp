/*
Nearly Lucky Number
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    int flag = 0;
    cin >> s;
    for (int k = 0; k < s.length(); k++)
    {
        if (s.at(k) == '4' || s.at(k) == '7')
        {
            flag++;
        }
    }
    s1 = to_string(flag);
    flag = 0;
    // cout << s1.length();
    // cout << s.length();
    for (int k = 0; k < s1.length(); k++)
    {
        if (s1.at(k) == '4' || s1.at(k) == '7')
        {
            flag++;
        }
        else
            flag = 0;
    }
    if (flag == s1.length())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}