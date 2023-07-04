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
        if (n % 2 == 0)
            cout << n / 2 << "\n";
        else
        {
            cout << " " << n / 2 + 1 << "\n";
            cout << 1 << " " << 3 << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " " << i + 4 << " ";
        }
        cout << endl;
    }
    return 0;
}