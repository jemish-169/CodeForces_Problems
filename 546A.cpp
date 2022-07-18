/*
Soldier and Bananas
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int price_of_bananas, total_dallars, wants_to_buy_banana, required_dollars = 0;
    cin >> price_of_bananas >> total_dallars >> wants_to_buy_banana;
    for (int i = 0; i <= wants_to_buy_banana; i++)
    {
        required_dollars += i * price_of_bananas;
    }
    required_dollars -= total_dallars;
    if (required_dollars <= 0)
        cout << "0";
    else
        cout << required_dollars;
    return 0;
}