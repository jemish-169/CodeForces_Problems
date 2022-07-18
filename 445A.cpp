/*
DZY Loves Chessboard
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
        int x, y;
        char a;
        bool b;
        cin >> x >> y;
        for (int i = 1; i <= x; i++)
        {
            if (i % 2 == 0)
                b = false;
            else
                b = true;
            for (int j = 0; j < y; j++)
            {

                cin >> a;
                if (a == '-')
                    cout << "-";
                else
                {
                    if (b == true)
                        cout << "B";
                    else
                        cout << "W";
                }
                (b == true) ? b = false : b = true;
            }
            cout << endl;
        }
    }
    return 0;
}