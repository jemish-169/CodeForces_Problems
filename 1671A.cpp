/*
Strig Building
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int i = 0, flag = 1;
        string s;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            while (s[i] == s[i + 1])
            {
                flag++;
                i++;
            }
            // cout << flag << " ";
            if (flag == 1)
            {
                cout << "NO";
                break;
            }
            flag = 1;
        }
        if (i == s.length())
            cout << "YES";
        cout << endl;
    }

    return 0;
}