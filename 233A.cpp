/*
Perfect Permutation
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    if (num % 2 == 1)
        cout << -1;
    else
    {
        for (int i = 1; i < num; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
    }
    return 0;
}