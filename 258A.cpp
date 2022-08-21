/*
Little Elephant and Bits
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        string s, str = "";
        bool b = true;
        cin >> s;
        // cout << s.length() << endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (b && s[i] == '0')
            {
                b = false;
            }
            else
            {
                str += s[i];
            }
        }
        if (s == str)
        {
            cout << s.substr(0, s.length() - 1);
            return 0;
        }
        cout << str;
        // cout << s.length() << endl;
    }
    return 0;
}