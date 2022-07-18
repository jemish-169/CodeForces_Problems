/*
Football
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int flag = 0;
    string s;
    cin >> s;
    for (i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            flag++;
        }
        else
            flag = 0;
        if (flag >= 6)
            break;
    }
    if (flag >= 6)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}