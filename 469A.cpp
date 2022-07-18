/*
I Wanna Be the Guy
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, k, j, pos = 0, flag = 1, data;
    cin >> num >> pos;
    int arr[250] = {0};

    for (int i = 1; i <= pos; i++)
    {
        cin >> data;
        arr[data] = data;
    }
    cin >> pos;
    for (int i = 1; i <= pos; i++)
    {
        cin >> data;
        arr[data] = data;
    }

    for (j = 1; j <= num; j++)
    {
        if (arr[j] == 0)
        {
            cout << "Oh, my keyboard!";
            break;
        }
    }
    if (j == num + 1)
        cout << "I become the guy.";
    return 0;
}
