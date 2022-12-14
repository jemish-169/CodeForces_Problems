/*
Playing with Dice
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int a, b, x = 0, y = 0, z = 0;
        cin >> a >> b;
        for (int i = 1; i <= 6; i++)
        {
            if (abs(a - i) < abs(b - i))
                x++;
            if (abs(a - i) == abs(b - i))
                y++;
            if (abs(a - i) > abs(b - i))
                z++;
        }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}