/*
Sail
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
    int cases = 1;
    int i(0), t, sx, sy, ex, ey;
    string s;
    cin >> t >> sx >> sy >> ex >> ey >> s;
    char c, d;
    for (int i = 0; i < s.length(); i++)
    {
        cout << i;
        if (sx == ex && sy == ey)
        {
            cout << i + 1;
            return 0;
        }

        if (sx < ex)
            c = 'E';
        else if (sx > ex)
            c = 'W';
        else
            c = 'z';

        if (sy < ey)
            d = 'N';
        else if (sy > ey)
            d = 'S';
        else
            d = 'z';

        if (s[i] == c)
        {
            sx++;
            break;
        }
        if (s[i] == d)
        {
            sy++;
            break;
        }
    }
    cout << -1;
    return 0;
}