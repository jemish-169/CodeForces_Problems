/*
merathon
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
    cin >> cases;
    while (cases--)
    {
        int a, b, f(0);
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            cin >> b;
            if (b > a)
                f++;
        }
        cout << f << endl;
    }
    return 0;
}