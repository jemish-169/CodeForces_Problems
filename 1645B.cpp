/*
Repeating Cipher
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, j = 1;
    string s;
    cin >> x >> s;
    for (int i = 0; i < x; i++)
    {
        cout << s[i];
        i += j;
        j++;
    }
    return 0;
}