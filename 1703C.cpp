/*
Cypher
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
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        for (int i = 0; i < x; i++)
        {
            int q, sum = 0;
            string s;
            cin >> q >> s;
            for (int i = 0; i < q; i++)
            {
                if (s[i] == 'D')
                    ++sum;
                else
                    --sum;
            }
            if ((a[i] + sum) % 10 < 0)
                cout << 10 - abs((a[i] + sum) % 10) << " ";
            else
                cout << (a[i] + sum) % 10 << " ";
        }
        cout << endl;
    }
    return 0;
}