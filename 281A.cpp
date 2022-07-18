/*
word capitilazition
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s1 = "a";
    if (s.size() > 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
    }
    else
    {
        if ((s.size() == 1) && (s[0] >= 'a' && s[0] <= 'z'))
            s[0] -= 32;
    }
    cout << s;
    // cout << s1.at(0) - 32;
    return 0;
}