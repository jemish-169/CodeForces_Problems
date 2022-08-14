/*
Big Segment
*/
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    map<pair<int, int>, int> mp;
    vector<int> v1, v2;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int c, d;
        cin >> c >> d;
        v1.push_back(c);
        v2.push_back(d);
        mp.insert({{c, d}, i + 1});
    }
    int a = *min_element(v1.begin(), v1.end());
    int b = *max_element(v2.begin(), v2.end());
    if (mp.find({a, b}) == mp.end())
        cout << -1;
    else
        cout << mp[{a, b}];
    return 0;
}