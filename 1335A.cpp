/*
Candies and Two Sisters
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data, cases = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        data % 2 == 0 ? cout << (data / 2) - 1 << endl : cout << (data / 2) << endl;
    }
    return 0;
}