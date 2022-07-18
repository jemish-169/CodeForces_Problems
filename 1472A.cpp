/*
Cards for Friends
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, w, h, n;
    cin >> cases;
    while (cases--)
    {
        int flag = 0;
        cin >> w >> h >> n;
        while (w % 2 != 1 || h % 2 != 1)
        {
            if (w % 2 == 0)
            {
                w /= 2;
                flag++;
            }
            if (h % 2 == 0)
            {
                h /= 2;
                flag++;
            }
        }
        pow(2, flag) >= n ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}