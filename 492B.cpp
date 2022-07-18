/*
Vanya and Lanterns
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    sort(array, array + n);
    int d = 2 * max(array[0], l - array[n - 1]);
    for (int i = 1; i < n; i++)
        d = max(d, array[i] - array[i - 1]);
    cout << fixed << setprecision(10) << (double)d / 2 << endl;

    return 0;
}