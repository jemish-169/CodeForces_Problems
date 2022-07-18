/*
String Task
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    int j = s1.length();

    for_each(s1.begin(), s1.end(), [](char &c)
             { c = tolower(c); });
    for (int i = 0; i < j; i++)
    {
        if (!(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'y'))
        {
            s2 += '.';
            s2 += s1[i];
        }

        else
            continue;
    }
    cout << s2;
    return 0;
}