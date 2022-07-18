/*
Supercentral Point
*/
#include <bits/stdc++.h>
using namespace std;
set<pair<int, int>> st;
int main()
{
    bool b1(true), b2(true), b3(true), b4(true);
    int x, y, n, flag = 0, ans(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        st.insert({x, y});
    }

    // for (auto it = st.begin(); it != st.end(); it++)
    //     cout << it->first << " " << it->second << endl;

    for (auto it = st.begin(); it != st.end(); it++)
    {
        for (auto itr = st.begin(); itr != st.end(); itr++)
        {
            if (b1 && it->first == itr->first && it->second > itr->second)
            {
                flag++;
                b1 = false;
            }
            if (b2 && it->first == itr->first && it->second < itr->second)
            {
                flag++;
                b2 = false;
            }
            if (b3 && it->first < itr->first && it->second == itr->second)
            {
                flag++;
                b3 = false;
            }
            if (b4 && it->first > itr->first && it->second == itr->second)
            {
                flag++;
                b4 = false;
            }
            // cout << flag << endl;
        }
        if (flag >= 4)
            ans++;
        flag = 0;
        b1 = b2 = b3 = b4 = true;
    }
    cout << ans;
    return 0;
}