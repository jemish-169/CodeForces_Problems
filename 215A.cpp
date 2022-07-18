/*
Bicycle Chain
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = 0;
int mini = 10e8 + 10;
int32_t main()
{
    int cases = 1;
    // cin >> cases;
    while (cases--)
    {
        int n, x(0), div(0), m;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        cin >> m;
        int arr2[m];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr2[j] % arr1[i] == 0)
                {
                    div = arr2[j] / arr1[i];
                    if (div == maxi)
                        x++;
                    else if (div > maxi)
                    {
                        x = 1;
                        maxi = div;
                    }
                    // cout << maxi << endl;
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}