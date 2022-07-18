/*
Triple
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, data;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        int k, arr[data];
        for (int i = 0; i < data; i++)
            cin >> arr[i];
        sort(arr, arr + data);
        for (k = data - 1; k >= 0; k--)
        {
            if (arr[k] == arr[k - 1] && arr[k - 1] == arr[k - 2])
            {
                cout << arr[k] << endl;
                break;
            }
        }
        if (k == -1)
            cout << -1 << endl;
    }

    return 0;
}