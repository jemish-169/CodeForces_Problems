/*
The new year meeting friends
*/
#include <bits/stdc++.h>
using namespace std;
int distance(int w, int x, int y, int z)
{
    return abs(z - x) + abs(z - y) + abs(z - w);
}
int main()
{
    int mini, a, b, c;
    cin >> a >> b >> c;
    for (int i = min(a, min(b, c)); i <= max(a, max(b, c)); i++)
    {
        mini = min(mini, distance(a, b, c, i));
    }
    cout << mini;
    return 0;
}