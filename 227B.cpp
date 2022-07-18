/*
 Effective Approach
*/

#include <bits/stdc++.h>
#define int int64_t
using namespace std;
map<int, int> mp;
int32_t main()
{
    int data, m, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> data;
        mp.insert(pair<int, int>(data, i));
    }
    cin >> m;
    int b[m], sum1 = 0, sum2 = 0;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        auto x = mp.find(b[i]);
        sum1 += x->second;
        sum2 += n - x->second + 1;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}