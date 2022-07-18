/*
Jeff and Digits
*/
#include <bits/stdc++.h>
#define maxi 0;
#define mini 10e8 + 10;
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int y, x, z(0), f(0);
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cin >> y;
            y == 0 ? z++ : f++;
        }
        if (z == 0)
            cout << -1;
        else if (f < 9)
            cout << 0;
        else
        {
            f -= f % 9;
            for (int i = 0; i < f; i++)
                cout << 5;
            for (int i = 0; i < z; i++)
                cout << 0;
        }
    }
    return 0;
}