/*
Odd/Even integer
*/
#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int d)
{
    int flag(0), p = a[0] % 2;
    for (int i = 1; i < d; i++)
    {
        if (a[i] % 2 != p)
            flag++;
    }
    if (flag == 0)
        return true;
    else
        return false;
}
int main()
{
    int data, cases;
    cin >> cases;
    for (int k = 0; k < cases; k++)
    {
        cin >> data;
        int arr[data];
        for (int i = 0; i < data; i++)
            cin >> arr[i];
        if (check(arr, data))
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < data; i += 2)
                arr[i]++;
            if (check(arr, data))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}