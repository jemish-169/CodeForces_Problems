#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        sum -= max({a, b, c});
        sum -= min({a, b, c});
        cout << sum << endl;
    }
}