/*
Reconnaissance 2
*/
#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<int, int>::iterator i;
int main()
{
    int n, i, data, p, q, mini = 1001, y = mini;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        a[i] = data;
        mp.insert({i, data});
    }
    for (i = 0; i < n - 1; i++)
    {
        mini = min(mini, abs(a[i] - a[i + 1]));
        if (mini != y)
        {
            p = i;
            q = i + 1;
            y = mini;
        }
    }
    mini = min(mini, abs(a[n - 1] - a[0]));
    if (mini != y)
    {
        p = i;
        q = (i + 1) % n;
        y = mini;
    }
    cout << p + 1 << " " << q + 1 << endl;

    return 0;
}