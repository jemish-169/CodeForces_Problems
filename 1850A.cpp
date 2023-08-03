/*
To my critics
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mini = min({a, b, c});
        a += b + c - mini;
        if (a < 10)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}