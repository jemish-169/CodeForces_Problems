/*
pangram
*/
#include <bits/stdc++.h>
using namespace std;

string s;
int num = 0;
bool distinct(char ch, int z)
{
    for (int i = 0; i < z; i++)
    {
        if (ch == s[i])
        {
            return false;
        }
    }
    s += ch;
    return true;
}
int main()
{
    int flag = 0, j = 0;
    char ch;
    cin >> num >> s;
    while (s[j])
    {

        s[j] = tolower(s[j]);
        j++;
    }
    for (int i = 0; i < num; i++)
        if (distinct(s[i], i))
            flag++;
    flag != 26 ? cout << "NO" << endl : cout << "YES" << endl;

    return 0;
}