/*
party
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> v[2001];
int maxi = INT_MIN;
void dfs(int x, int level)
{
    maxi = max(maxi, level);
    for (int i = 0; i < v[x].size(); i++)
    {
        dfs(v[x][i], level + 1);
    }
}
int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = x;
        if (x != -1)
            v[x].push_back(i);
        else
            v[0].push_back(i);
    }
    for (int i = 0; i < v[0].size(); i++)
        dfs(v[0][i], 1);
    cout << maxi << endl;
    return 0;
}