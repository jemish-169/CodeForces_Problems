/*
Subtle Substring Subtraction
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string str;
        cin >> str;
        int alice = 0, bob = 0, n = str.length();
        if (n % 2 == 0)
        {
            for (int i = 0; i < str.length(); i++)
                alice += str[i];
            cout << "Alice " << alice - 96 * n << endl;
        }
        else
        {
            int alice2 = 0, bob2 = 0;
            for (int i = 0; i < str.length() - 1; i++)
                alice += str[i];
            bob += str[n - 1];
            for (int i = 1; i < str.length(); i++)
                alice2 += str[i];
            bob2 += str[0];
            if (alice2 > alice)
            {
                int b = (bob2 - 96);
                int a = alice2 - (96 * (n - 1));
                if (alice2 < bob2)
                    cout << "Bob " << b - a << endl;
                else
                    cout << "Alice " << a - b << endl;
            }
            else
            {
                int b = (bob - 96);
                int a = alice - (96 * (n - 1));
                if (alice < bob)
                    cout << "Bob " << b - a << endl;
                else
                    cout << "Alice " << a - b << endl;
            }
        }
    }
    return 0;
}