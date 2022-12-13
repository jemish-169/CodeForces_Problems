/*
Little Elephant and Magic Square
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

    int m[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];
    }
    int t = 1;
    while (!((m[0][0] + m[1][0] + m[2][0]) == (m[0][1] + m[1][1] + m[2][1]) == (m[0][2] + m[1][2] + m[2][2]) == (m[0][0] + m[0][1] + m[0][2]) == (m[1][0] + m[1][1] + m[1][2]) == (m[2][0] + m[2][1] + m[2][2]) == (m[0][0] + m[1][1] + m[2][2]) == (m[0][2] + m[1][1] + m[2][0])))
    {
        m[0][0] = t;
        m[1][1] = (m[0][0] + m[1][0] + m[2][0]) - m[1][0] - m[1][2];
        m[2][2] = (m[0][0] + m[1][0] + m[2][0]) - m[2][0] - m[2][1];
        t++;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}