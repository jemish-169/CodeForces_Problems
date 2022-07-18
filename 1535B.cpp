/*
Array reordering
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int a[n], even(0), odd(0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] % 2 == 0 ? even++ : odd++;
        }
        int sum(0), x = even - odd;
        for (int i = 1; i <= even; i++)
        {
            sum += (n - i);
        }
        cout << sum << endl;
    }
    return 0;
}