/*
Domino piling
*/
#include <bits/stdc++.h>
using namespace std;

int fun(int num)
{
    if (num > 0)
        return (num + fun(num - 2));
    else
    {
        return 0;
    }
}
int main()
{
    int num = 5;
    cout << fun(num);
    return 0;
}
