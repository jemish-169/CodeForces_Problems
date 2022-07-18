/*
queue at the school
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s.at(i) == 'B' && s.at(i + 1) == 'G')
            {
                s.at(i) = 'G';
                s.at(i + 1) = 'B';
                i++;
            }
        }
    }
    cout << s;
    return 0;
}