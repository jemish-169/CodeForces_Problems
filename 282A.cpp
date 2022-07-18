/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.at(0) == '+')
            ++x;
        else if (s.at(2) == '+')
            x++;
        else if (s.at(0) == '-')
            --x;
        else if (s.at(2) == '-')
            x--;
        else
            continue;
    }
    cout << x;

    return 0;
}