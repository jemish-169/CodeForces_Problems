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
        vector<int> vec(x);

        for (int i = 0; i < x; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        if (vec[0] == vec[x - 1])
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << vec[x - 1] << " ";
            for (int i = 0; i < x - 1; i++)
                cout << vec[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}