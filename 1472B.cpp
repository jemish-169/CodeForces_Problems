/*
Fair division
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int data, a1(0), b2(0);
        cin >> data;
        int a[data];
        for (int i = 0; i < data; i++)
        {
            cin >> a[i];
            a[i] == 1 ? a1++ : b2++;
        }
        // cout << a1 << " " << b2 << endl;
        b2 % 2 == 0 ? b2 = 0 : b2 = 1;
        if (b2)
        {
            a1 -= 2;
            b2--;
        }
        a1 % 2 == 0 &&a1 >= 0 ? a1 = 0 : a1 = 1;
        a1 == 0 && b2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}