/*
Number Replacement
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        map<int, char> mp;
        int x;
        bool b = true;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        for (int i = 0; i < x; i++)
        {
            if (mp.find(arr[i]) != mp.end() && mp[arr[i]] != s[i])
            {
                cout << "NO" << endl;
                b = false;
                break;
            }
            else
                mp[arr[i]] = s[i];
        }
        if (b)
            cout << "YES" << endl;
    }
    return 0;
}