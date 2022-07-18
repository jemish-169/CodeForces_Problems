/*
Young physicist
*/
#include <bits/stdc++.h>
using namespace std;
class Young
{
public:
    Young() {}
    int a, b, c;
};
int main()
{
    int p = 0, q = 0, j, r = 0, n;
    cin >> n;
    class Young c1[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c1[i].a;
        cin >> c1[i].b;
        cin >> c1[i].c;
    }

    for (int i = 0; i < n; i++)
    {
        p += c1[i].a;
        q += c1[i].b;
        r += c1[i].c;
    }
    if (p == 0 && q == 0 && r == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}