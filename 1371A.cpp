/*
Magical Sticks
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int data, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        int i = ceil((double)data / 2);
        cout << i << endl;
    }
    return 0;
}