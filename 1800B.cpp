/*
Count the number of pairs
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
        int N, k;
        cin >> N >> k;
        string s;
        cin >> s;
        N = 26;
        vector<int> big(26, 0), small(26, 0);
        for (auto &i : s)
        {
            if ('A' <= i && 'Z' >= i)
                big[i - 'A']++;
            else
                small[i - 'a']++;
        }
        int answer = 0;
        for (int i = 0; i < N; i++)
        {
            int pairs = min(small[i], big[i]);
            answer += pairs;
            small[i] -= pairs;
            big[i] -= pairs;
            int add = min(k, max(small[i], big[i]) / 2);
            k -= add;
            answer += add;
        }
        cout << answer << endl;
    }
    return 0;
}