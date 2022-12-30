/*
Ezzat and Two Subsequences
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
        float x;
        cin >> x;
        vector<int> vec(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        float maxi = *max_element(vec.begin(), vec.end());
        float sum = accumulate(vec.begin(), vec.end(), 0);
        sum -= maxi;
        cout << fixed << setprecision(9) << maxi + (sum / (x - 1)) << endl;
    }
    return 0;
}
158