/*
Shower Line
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
// vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int vec[6][6], x = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
            cin >> vec[i][j];
    }
    // cout << "dfv";
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            for (int k = 1; k < 6; k++)
            {
                for (int l = 1; l < 6; l++)
                {
                    for (int m = 1; m < 6; m++)
                    {
                        if ((i != j) && (j != k) && (j != i) && (k != i) && (k != j) && (k != l) && (l != m) && (l != i) && (l != j) && (l != k) && (m != i) && (m != j) && (m != k) && (m != l))
                        {
                            int arr[6] = {0, i, j, k, l, m};
                            int sum = vec[arr[1]][arr[2]] + vec[arr[2]][arr[1]] + 2 * (vec[arr[3]][arr[4]] + vec[arr[4]][arr[3]]) + vec[arr[2]][arr[3]] + vec[arr[3]][arr[2]] + 2 * (vec[arr[4]][arr[5]] + vec[arr[5]][arr[4]]);
                            maxi = max(maxi, sum);
                            // cout << i << " " << j << " " << k << " " << l << " " << m << endl;
                            // x++;
                        }
                    }
                }
            }
        }
    }
    cout << maxi;
    return 0;
}