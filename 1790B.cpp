/*
 Taisia and Dice
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
        int n, sum, rem;
        cin >> n >> sum >> rem;
        vector<int> vec(n, 1);
        vec[0] = sum - rem;
        sum -= vec[0];
        sum -= (n - 1);
        for (int i = 1; sum && i < n; i++)
        {
            if (sum >= vec[0])
            {
                vec[i] = vec[0];
                sum -= vec[0] - 1;
            }
            else
            {
                vec[i] += sum;
                sum = 0;
            }
        }
        for (auto i : vec)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}