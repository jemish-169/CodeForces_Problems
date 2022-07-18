/*
Fair Playoff
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4], cases = 0;
    cin >> cases;
    while (cases--)
    {
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        int x = max(a[0], a[1]), y = max(a[2], a[3]);
        sort(a, a + 4);
        min(x, y) == a[2] ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}