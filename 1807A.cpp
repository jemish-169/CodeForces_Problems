/*
Plus or minus
*/
#include <bits/stdc++.h>
using namespace std;
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
        int a, b, c;
        cin >> a >> b >> c;
        if (a - b == c)
            cout << "-" << endl;
        else
            cout << "+" << endl;
    }
    return 0;
}