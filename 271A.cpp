/*
Beautiful Year
*/
#include <bits/stdc++.h>
using namespace std;
bool disnict(int yr)
{
    int i, j, flag = 0;
    string year = to_string(yr);
    for (i = 0; i < year.length(); i++)
    {
        for (j = i + 1; j < year.length(); j++)
        {
            if (year[j] == year[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (i == year.length())
        return true;
    else
        return false;
}
int main()
{
    int yr;
    cin >> yr;
    yr++;
    while (!disnict(yr))
    {
        yr++;
    }
    cout << yr;
    return 0;
}