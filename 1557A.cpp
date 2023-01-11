/*
Ezzat and Two Subsequences
*/
#include <bits/stdc++.h>
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
    cout << fixed << setprecision(10);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x;
        cin >> x;
        vector<int> vec(x);
        for (int i = 0; i < x; i++)
            cin >> vec[i];
        int maxi = *max_element(vec.begin(), vec.end());
        long long sum = accumulate(vec.begin(), vec.end(), 0);
        sum -= maxi;
        cout << (1.0 * sum / (x - 1) + maxi) << endl;
    }
    return 0;
}