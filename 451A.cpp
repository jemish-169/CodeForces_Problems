/*
Game with stics
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count, flag = 0, n, m;
    cin >> n >> m;
    count = m * n;
    while (count)
    {
        count -= (m + n - 1);
        m--;
        n--;
        flag++;
    }
    flag % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
    return 0;
}