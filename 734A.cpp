/*
A. Anton and Danik
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int anton = 0, danik = 0, n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            anton++;
        if (str[i] == 'D')
            danik++;
    }
    if (anton > danik)
        cout << "Anton";
    else if (danik > anton)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}