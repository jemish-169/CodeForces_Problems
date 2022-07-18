/*
 cAPS lOCK
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int j, i, flag = 0;
    cin >> str;

    for (j = 1; j < str.size(); j++)
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1 || str.size() == 1)
    {
        for (i = 1; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        if (str[0] >= 'a' && str[0] <= 'z')
            str[0] = toupper(str[0]);
        else
            str[0] = tolower(str[0]);
    }
    cout << str;
    return 0;
}