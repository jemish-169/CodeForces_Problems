/*
 Valera and Antique Items
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1, v;
    cin >> cases >> v;
    for (int i = 0; i < cases; i++)
    {
        int x, data, mini = INT_MAX;
        cin >> x;
        while (x--)
        {
            cin >> data;
            if (data < mini)
                mini = data;
        }
        if (mini < v)
            vec.push_back(i + 1);
    }
    cout << vec.size() << endl;
    for (auto i : vec)
        cout << i << " ";
    return 0;
}