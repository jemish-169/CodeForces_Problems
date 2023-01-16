#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 7 == 0)
            cout << x << endl;
        else
        {
            int ans = -1;
            for (int i = 0; i < 10; i++)
            {
                if ((x - x % 10 + i) % 7 == 0)
                    ans = x - x % 10 + i;
            }
            cout << ans << endl;
        }
    }
    return 0;
}