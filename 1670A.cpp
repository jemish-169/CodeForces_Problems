/*
Prof. Slim
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n, j(0), data, neg(0), pos(0);
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> data;
            a[i] = abs(data);
            data < 0 ? neg++ : pos++;
        }
        while (neg)
        {
            a[j] = -a[j];
            j++;
            neg--;
        }
        int k;
        for (k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
                break;
        }
        k < n - 1 ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}