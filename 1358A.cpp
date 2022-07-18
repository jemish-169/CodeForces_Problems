/*
Park Lighting
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
    cin >> cases;
    while (cases--)
    {
        int m, n;
        cin >> m >> n;
        (m * n) % 2 == 0 ? cout << (m * n) / 2 << endl : cout << (m * n) / 2 + 1 << endl;
    }
    return 0;
}