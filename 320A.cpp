/*
Magic numbers
*/
#include <bits/stdc++.h>
#define maxi 0;
#define mini 10e8 + 10;
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int main()
{
    int i, cases = 1;
    // cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '1' || (s[i] == '4' && s[i - 1] == '1') || (s[i] == '4' && s[i - 1] == '4' && s[i - 2] == '1'))
                continue;
            else
            {
                cout << "NO";
                exit(0);
            }
        }
        if (i == s.length())
            cout << "YES";
    }
    return 0;
}