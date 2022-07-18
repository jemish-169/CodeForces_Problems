/*
Favourite sequence
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
        int b;
        cin >> b;
        int a[b];
        for (int i = 0; i < b; i++)
        {
            cin >> a[i];
        }
        int i(0), j(b - 1);
        while (i < j)
        {
            cout << a[i] << " " << a[j] << " ";
            i++;
            j--;
        }
        if (i == j)
            cout << a[i];
        cout << endl;
    }
    return 0;
}