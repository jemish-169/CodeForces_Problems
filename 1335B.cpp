/*
Construct the String
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string str = "";
        int n, a, b;
        char c = 'a';
        cin >> n >> a >> b;
        for (int i = 1; i <= b; i++)
        {
            str += c;
            c++;
        }
        c = 'a';
        string s = str;
        if (a == 1 && b == 1)
        {
            for (int i = 1; i <= n; i++)
                str += c;
        }
        else
        {
            for (int i = 1; i <= n; i++)
                str += s;
        }
        for (int i = 0; i < n; i++)
            cout << str[i];
        cout << endl;
    }

    return 0;
}