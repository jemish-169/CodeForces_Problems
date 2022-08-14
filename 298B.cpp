/*
Sail
*/
#include <bits/stdc++.h>
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
    int t, sx, sy, ex, ey;
    string s;
    cin >> t >> sx >> sy >> ex >> ey >> s;
    char c, d;
    for (int i = 0; i < t; i++)
    {
        if (sx == ex && sy == ey)
        {
            cout << i;
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
            if (c == 'W')
                sx--;
            else
                sx++;
            continue;
        }
        if (s[i] == d)
        {
            if (d == 'S')
                sy--;
            else
                sy++;
            continue;
        }
    }
    if (sx == ex && sy == ey)
    {
        cout << t;
        return 0;
    }
    cout << -1;
    return 0;
}