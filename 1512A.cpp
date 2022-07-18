/*
Spy detected!
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                if (i == 1)
                {
                    if (arr[2] == arr[3])
                    {
                        cout << 1 << endl;
                        break;
                    }
                    else
                    {
                        cout << 2 << endl;
                        break;
                    }
                }
                else
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}