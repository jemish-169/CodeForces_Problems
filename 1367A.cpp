/*
short substring
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, str = "";
    int cases;
    cin >> cases;
    while (cases--)
    {
        cin >> s;
        str += s[0];
        for (int i = 1; i < s.length(); i++)
        {
            str += s[i];
            if (s[i] == s[i + 1])
            {
                i++;
                continue;
            }
            // str += s[i];
        }
        cout << str << endl;
        str = "";
    }
    return 0;
}