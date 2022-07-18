/*
Minutes Before the New Year
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int h, m;
        cin >> h >> m;
        cout << (24 - h) * 60 - m << endl;
    }
    return 0;
}