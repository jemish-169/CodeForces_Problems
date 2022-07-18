/*
lucky?
*/
#include <bits/stdc++.h>
using namespace std;
int partition(int x)
{
    int sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int num1, num2;
        cin >> num1;
        num2 = num1 / 1000;
        num1 %= 1000;
        partition(num1) == partition(num2) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}