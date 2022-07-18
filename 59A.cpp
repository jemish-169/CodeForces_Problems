/*
Words
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int plus = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            plus++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            plus--;
    }
    if (plus < 0)
    {
        for_each(s.begin(), s.end(), [](char &c)
                 { c = towupper(c); });
    }
    else
    {
        for_each(s.begin(), s.end(), [](char &c)
                 { c = towlower(c); });
    }

    cout << s;
    return 0;
}