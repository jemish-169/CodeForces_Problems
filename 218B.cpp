/*
Airport
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
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int n, x, sum(0), sub(0);
        cin >> n >> x;
        int a[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        int s[x];
        copy(a, a + x, s);
        while (n--)
        {
            int i = 0;
            maxi = *max_element(a, a + x);
            sum += maxi;
            while (a[i] != maxi)
                i++;
            a[i]--;

            sort(s, s + x);
            for (int i = 0; i < x; i++)
                if (s[i] != 0)
                {
                    sub += s[i];
                    s[i]--;
                    break;
                }
        }
        cout << sum << " " << sub;
    }
    return 0;
}