/*
unique number
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        vector<int> vec;
        int x;
        cin >> x;
        if (x > 9 && x <= 45)
        {
            for (int i = 9; i >= 1; i--)
            {
                if (x > 0)
                {
                    if (x - i < 0)
                        vec.push_back(x);
                    else
                        vec.push_back(i);
                    x -= i;
                }
                else
                {
                    break;
                }
            }
            sort(vec.begin(), vec.end());
            for (auto i : vec)
                cout << i;
            cout << endl;
        }
        else if (x <= 9)
            cout << x << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}