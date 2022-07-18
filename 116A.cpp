/*
tram
*/
#include <bits/stdc++.h>
using namespace std;
class test
{
public:
    int a, b;
    test() {}
};
int main()
{
    int sum = 0, maximum = 0, n;
    cin >> n;
    test t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i].a;
        cin >> t[i].b;
    }
    for (int i = 0; i < n; i++)
    {
        sum += t[i].b;
        sum -= t[i].a;
        maximum = max(sum, maximum);
    }
    cout << maximum;
    return 0;
}