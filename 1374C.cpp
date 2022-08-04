/*
Move Brackets
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
        int size, z = 0, y = 0;
        string s;
        cin >> size >> s;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '(')
                ++z;
            else
            {
                --z;
                if (z < 0)
                {
                    z = 0;
                    ++y;
                }
            }
        }
        cout << y << endl;
    }
    return 0;
}