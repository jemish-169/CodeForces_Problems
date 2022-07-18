/*
Chat Room
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, m, flag = 0;
    string str;
    cin >> str;
    for (i = 0; i < str.size(); i++)
    {
        if (str.at(i) == 'h')
        {
            flag++;
            break;
        }
    }
    for (j = i + 1; j < str.size(); j++)
    {
        if (str.at(j) == 'e')
        {
            flag++;
            break;
        }
    }
    for (k = j + 1; k < str.size(); k++)
    {
        if (str.at(k) == 'l')
        {
            flag++;
            break;
        }
    }
    for (l = k + 1; l < str.size(); l++)
    {
        if (str.at(l) == 'l')
        {
            flag++;
            break;
        }
    }
    for (m = l + 1; m < str.size(); m++)
    {
        if (str.at(m) == 'o')
        {
            flag++;
            break;
        }
    }
    if (flag == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}