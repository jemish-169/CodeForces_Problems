/*
 Balanced Array
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        if ((data / 2) % 2 == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int a[data], k = 2, sum = 0;
            for (int i = 0; i < data / 2; i++)
            {
                a[i] = k;
                k += 2;
                sum += a[i];
            }
            k = 1;
            for (int i = data / 2; i < data - 1; i++)
            {
                a[i] = k;
                k += 2;
                sum -= a[i];
            }
            a[data - 1] = sum;
            for (int i = 0; i < data; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}