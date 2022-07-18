/*
Remove Smallest
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos, k, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> pos;
        int arr[pos];
        for (int i = 0; i < pos; i++)
            cin >> arr[i];
        sort(arr, arr + pos);
        for (k = 0; k < pos - 1; k++)
            if (!(arr[k + 1] - arr[k] <= 1))
                break;
        k == pos - 1 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}