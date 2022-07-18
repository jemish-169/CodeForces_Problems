/*
lights out
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data, arr[5][5] = {0};
    for (int i = 0; i < 25; i++)
        *((int *)arr + i) = 1;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> data;
            arr[i][j] += data;
            arr[i][j - 1] += data;
            arr[i][j + 1] += data;
            arr[i - 1][j] += data;
            arr[i + 1][j] += data;
        }
    }
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
            cout << arr[i][j] % 2;
        cout << endl;
    }
    return 0;
}