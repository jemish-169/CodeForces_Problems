/*
matrix rotation
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
        int a, b, c, d;
        bool bol = true;
        cin >> a >> b >> c >> d;
        for (int i = 0; i < 4; i++)
        {
            if (a < b && a < c && b < d && c < d)
            {
                cout << "YES" << endl;
                bol = false;
                break;
            }
            else
            {
                int temp = a;
                a = c;
                c = d;
                d = b;
                b = temp;
            }
        }
        if (bol)
            cout << "NO" << endl;
    }
    return 0;
}