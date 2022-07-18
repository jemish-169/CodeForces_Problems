/*
petya and strings
*/
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int i;
    string s1, s2;
    cin >> s1 >> s2;
    string s3, s4;
    for_each(s1.begin(), s1.end(), [](char &c)
             { c = ::toupper(c); });

    for_each(s2.begin(), s2.end(), [](char &c)
             { c = ::toupper(c); });

    // cout << s1 << s2;

    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;

    return 0;
}