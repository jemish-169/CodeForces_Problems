/*
new year transportation
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int arr[x] = {0};
    for (int i = 1; i < x; i++)
        cin >> arr[i];
    int sum = 1;
    while (sum != y && sum < x)
        sum += arr[sum];
    if (sum == y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}