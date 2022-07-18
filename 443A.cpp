/*
Anton and Letters
*/
#include <bits/stdc++.h>
using namespace std;
char arr[333];
int s = 0;
bool distinct(char ch)
{
    for (int i = 0; i < s; i++)
    {
        if (ch == arr[i])
        {
            return false;
        }
    }
    arr[s] = ch;
    s++;
    return true;
}

int main()
{
    int flag = 0;
    string str;
    do
    {
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            // cout << distinct(str[i]);
            if ((str.at(i) >= 'A' && str.at(i) <= 'Z') || (str.at(i) >= 'a' && str.at(i) <= 'z') && distinct(str[i]))
                flag++;
        }
    } while (str.at(str.size() - 1) != '}');
    cout << flag;
    return 0;
}