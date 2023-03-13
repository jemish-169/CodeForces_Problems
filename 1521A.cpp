/*
Nastia and Nearly Good Numbers
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a, b;
        cin >> a >> b;
        if (b == 1)
            cout << "NO\n";
        else
            cout << "YES\n"
                 << a << " " << a * b++ << " " << a * b << endl;
    }
    return 0;
}