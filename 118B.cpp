/*
Present From lena
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
    int cases;
    cin >> cases;
    int x = cases * 2 + 1;
    for (int i = 0; i <= cases; i++)
    {
        for (int j = 0; j <= cases - i - 1; j++)
            cout << "  ";
        cout << 0;
        for (int k = 1; k <= i; k++)
            cout << " " << k;
        for (int k = i - 1; k >= 0; k--)
            cout << " " << k;
        cout << endl;
    }
    for (int i = cases - 1; i >= 0; i--)
    {
        for (int j = 0; j <= cases - i - 1; j++)
            cout << "  ";
        cout << 0;
        for (int k = 1; k <= i; k++)
            cout << " " << k;
        for (int k = i - 1; k >= 0; k--)
            cout << " " << k;
        cout << endl;
    }
    return 0;
}