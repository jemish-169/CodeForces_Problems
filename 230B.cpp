/*
T-primes
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> tprime;
int ar[(int)1e6 + 10];
void prime()
{
    tprime.insert(4);
    for (int i = 3; i <= (int)1e6 + 1; i += 2)
    {
        if (ar[i] == 0)
        {
            tprime.insert(i * i);
            for (int j = i; j <= 1e6; j += i)
            {
                ar[j] = 1;
            }
        }
    }
}
int32_t main()
{
    int data, cases;
    cin >> cases;
    prime();
    while (cases--)
    {
        cin >> data;
        (tprime.find(data) != tprime.end()) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}