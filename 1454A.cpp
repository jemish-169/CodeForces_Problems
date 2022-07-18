/*
Special Permutation
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
        cout << n << " ";
        for (int i = 1; i < n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}