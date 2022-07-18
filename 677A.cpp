/*
vanya and fence
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int flag = 0, data;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        if (data <= h)
            flag++;
        else
            flag += 2;
    }
    cout << flag;
    return 0;
}