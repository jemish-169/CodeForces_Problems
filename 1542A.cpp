/*
Odd Set
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
    cin >> cases;
    while (cases--)
    {
        int x, n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}