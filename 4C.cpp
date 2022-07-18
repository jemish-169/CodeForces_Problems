/*
Regestration System
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> database;
    int cases, i = 1;
    cin >> cases;
    string s;
    while (cases--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}