/*
In Search of an Easy Problem
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, data, num;
    cin >> num;
    for (i = 0; i < num; i++)
    {
        cin >> data;
        if (data)
            break;
    }
    if (i == num)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}