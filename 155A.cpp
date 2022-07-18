/*
I_love_%username%
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int maxi = arr[0], mini = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
            flag++;
        }
        if (maxi < arr[i])
        {
            maxi = arr[i];
            flag++;
        }
    }
    cout << flag;
    return 0;
}