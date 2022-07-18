/*
Boring Apartments
*/
#include <bits/stdc++.h>
using namespace std;
int find(int a)
{
    int q = 0;
    string str = to_string(a);
    for (int i = 1; i <= str.length(); i++)
        q += i;
    return q;
}
int solve(int num)
{
    int x = num % 10;
    cout << (x - 1) * 10 + find(num) << endl;
    return 0;
}
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int s;
        cin >> s;
        solve(s);
    }
    return 0;
}