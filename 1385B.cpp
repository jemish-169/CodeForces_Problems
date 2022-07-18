/*
 Restore the Permutation by Merger
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cases = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> n;
        int x = 2 * n;
        int a[x];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        for (int i = 0; i < x; i++)
        {
            cout << a[i] << " ";
            int j = i + 1;
            while (a[i] != a[j])
                j++;
            while (j < x)
            {
                a[j] = a[j + 1];
                j++;
            }
            x--;
        }
        cout << endl;
    }
    return 0;
}