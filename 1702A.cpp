/*
Round Down the Price
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
        string str;
        cin >> str;
        int x = str.length();
        int q = pow(10, x - 1);
        int l = stoi(str);
        cout << l - q << endl;
    }
    return 0;
}