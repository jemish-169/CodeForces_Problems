/*
Construct a Rectangle
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
        vector<int> vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        sort(vec.begin(), vec.end());
        if (vec[0] == vec[1] && vec[2] % 2 == 0)
            cout << "YES" << endl;
        else if (vec[2] == vec[1] && vec[0] % 2 == 0)
            cout << "YES" << endl;
        else if (vec[2] == vec[1] + vec[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}