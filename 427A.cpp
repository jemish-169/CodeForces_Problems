/*
Police Recruits
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases, sum = 0, flag = 0, data;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        sum += data;
        if (sum < 0)
        {
            flag++;
            sum = 0;
        }
    }
    cout << flag;
    return 0;
}