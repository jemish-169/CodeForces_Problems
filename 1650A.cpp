/*
Deletions of Two Adjacent Letters
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string str;
    int num = 0, j;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> str;
        cin >> c;
        for (j = 0; j < str.length(); j++)
        {
            if ((j + 1) % 2 == 1 && str[j] == c)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (j == str.length())
            cout << "NO" << endl;
    }
    return 0;
}