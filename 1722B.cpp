/*
Colourblindness
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
        int x;
        string str, st;
        cin >> x >> st >> str;
        for (int i = 0; i < x; i++)
            if (st[i] == 'G' && str[i] == 'B')
                st[i] = 'B';
            else if (st[i] == 'B' && str[i] == 'G')
                st[i] = 'G';

        if (st == str)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}