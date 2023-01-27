/*
Polycarp and the Day of Pi
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
string maxi = "314159265358979323846264338327";
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    string s;
    while (cases--)
    {
        cin >> s;
        bool b = true;
        int n = s.size(), i(0), j(0);
        for (i = 0; i < n; i++, j++)
        {
            if (s[i] != maxi[j])
            {
                cout << i << endl;
                b = false;
                break;
            }
        }
        if (b)
            cout << n << endl;
    }
    return 0;
}