/*
team olimpyad
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, data, flag(0);
    cin >> n;
    int a[n] = {0}, b[n] = {0}, c[n] = {0}, x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        if (data == 1)
        {
            a[x] = i + 1;
            x++;
        }
        else if (data == 2)
        {
            b[y] = i + 1;
            y++;
        }
        else
        {
            c[z] = i + 1;
            z++;
        }
    }
    int p(x), q(y), r(z);
    while (p && q && r)
    {
        flag++;
        p--;
        q--;
        r--;
    }
    cout << flag << endl;
    while (flag)
    {
        flag--;
        x--;
        y--;
        z--;
        cout << a[x] << " " << b[y] << " " << c[z] << endl;
    }
    return 0;
}