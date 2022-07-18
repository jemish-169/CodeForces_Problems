/*
Cupboards
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    int l[cases], l0 = 0, r0(0), l1(0), r1(0), r[cases];

    for (int i = 0; i < cases; i++)
    {
        cin >> l[i] >> r[i];
        if (l[i] == 0)
            l0++;
        else
            l1++;
        if (r[i] == 0)
            r0++;
        else
            r1++;
    }
    cout << min(l0, l1) + min(r0, r1);
    return 0;
}