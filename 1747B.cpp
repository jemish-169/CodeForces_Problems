/*
Ban ban
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
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << "\n"
                 << "1 2"
                 << "\n";
        else
        {
            cout << (n + 1) / 2 << "\n";
            int r = 1, l = 3 * n;
            for (int i = 1; i <= (n + 1) / 2; i++)
            {
                cout << r << " " << l << "\n";
                r += 3;
                l -= 3;
            }
        }
    }
    return 0;
}