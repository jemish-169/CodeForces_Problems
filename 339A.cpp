/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i <= s.size(); i += 2)
    {
        for (int j = i + 2; j <= s.size(); j += 2)
        {
            if (s.at(i) > s.at(j))
            {
                char temp = s.at(i);
                s.at(i) = s.at(j);
                s.at(j) = temp;
            }
        }
    }
    // cout << s.at(1);
    cout << s;
    return 0;
}