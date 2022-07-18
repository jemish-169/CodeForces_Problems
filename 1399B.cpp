/*
Gifts Fixing
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int cases = 0;
    cin >> cases;
    while (cases--)
    {
        long long int data = 0;
        cin >> data;
        long long int arr[data], brr[data];
        for (long long int i = 0; i < data; i++)
            cin >> arr[i];
        for (long long int i = 0; i < data; i++)
            cin >> brr[i];
        long long int minA = arr[0], minB = brr[0];
        for (long long int i = 1; i < data; i++)
        {
            minA = min(minA, arr[i]);
            minB = min(minB, brr[i]);
        }
        long long int diffA, diffB, flags = 0;
        for (long long int i = 0; i < data; i++)
        {
            diffA = arr[i] - minA;
            diffB = brr[i] - minB;
            flags += max(diffA, diffB);
        }
        cout << flags << endl;
    }
    return 0;
}