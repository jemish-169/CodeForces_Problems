/*
new year and hurry
*/
#include <bits/stdc++.h>
using namespace std;
int solve(int que, int min)
{
    int req_min = 5 * (que * (que + 1) / 2);

    if (240 - min >= req_min)
    {
        cout << que;
        return 0;
    }
    else
    {
        que--;
        solve(que, min);
    }

    // cout << que;
    return 0;
}
int main()
{
    int que, min;
    cin >> que >> min;
    solve(que, min);
    return 0;
}