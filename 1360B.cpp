/*
Honest coach
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int data;
        cin >> data;
        int arr[data];
        for (int i = 0; i < data; i++)
            cin >> arr[i];
        sort(arr, arr + data);
        int mini = arr[data - 1] - arr[0];
        for (int i = 0; i < data - 1; i++)
            mini = min(mini, arr[i + 1] - arr[i]);
        cout << mini << endl;
    }
    return 0;
}