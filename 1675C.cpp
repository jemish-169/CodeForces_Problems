/*
Detective Task
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int flag(0);
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++)
        {
            while (s[i] == '?' || s[i] == '1')
            {
                i++;
                flag++;
            }
        }
        cout << flag << "\n";
    }
    return 0;
}