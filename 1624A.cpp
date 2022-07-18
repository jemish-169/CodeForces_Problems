/*
plus one on the subset
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
        cout << arr[data - 1] - arr[0] << endl;
    }
    return 0;
}