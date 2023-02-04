/*
Following Directions
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
        int x;
        string str = "";
        bool p = true;
        cin >> x >> str;
        int a(0), b(0);
        for (auto i : str)
        {
            if (i == 'U')
                b++;
            else if (i == 'R')
                a++;
            else if (i == 'L')
                a--;
            else if (i == 'D')
                b--;
            if (a == 1 && b == 1)
            {
                cout << "YES" << endl;
                p = false;
                break;
            }
        }
        if (p)
            cout << "NO" << endl;
    }
    return 0;
}