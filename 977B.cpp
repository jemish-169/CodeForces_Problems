/*
Two gram
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag(0), maxi = 0, n;
    string str, gram;
    cin >> n >> str;
    for (int i = 0; i < n - 1; i++)
    {
        string s = str.substr(i, 2);
        for (int j = 0; j < n - 1; j++)
        {
            if (s[0] == str[j] && s[1] == str[j + 1])
                flag++;
        }
        if (flag > maxi)
        {
            maxi = flag;
            gram = s;
        }
        flag = 0;
    }
    cout << gram;
    return 0;
}