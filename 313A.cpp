/*
 Ilya and Bank Account
*/
#include <bits/stdc++.h>
using namespace std;
int remove_last(int amount)
{
    int res = 0, div = 1;
    amount /= 10;
    while (amount)
    {
        res += (amount % 10) * div;
        div *= 10;
        amount /= 10;
    }
    return res;
}
int remove_sec_last(int amount)
{
    int res = 0, div = 1;
    int x = (amount) % 10;
    amount /= 100;
    while (amount)
    {
        res += (amount % 10) * div;
        div *= 10;
        amount /= 10;
    }
    res = res * 10 + x;
    return -res;
}
int main()
{
    long long int amount = 0;
    cin >> amount;
    if (amount < 0)
    {
        if (remove_sec_last(-amount) > remove_last(amount))
            cout << remove_sec_last(-amount);
        else
            cout << remove_last(amount);
    }
    else
        cout << amount;
    return 0;
}