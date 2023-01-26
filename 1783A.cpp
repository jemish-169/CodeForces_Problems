/*
make it beautiful
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        vector<int> vec(x), bec(x);

        for (int i = 0; i < x; i++)
        {
            cin >> vec[i];
            bec[i] = vec[i];
        }
        sort(bec.begin(), bec.end(), greater<int>());
        if (vec == bec)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < x; i++)
                cout << bec[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}