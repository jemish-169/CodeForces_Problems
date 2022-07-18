/*
array balancing
*/
#include <bits/stdc++.h>
using namespace std;
void swap(int x, int y)
{
    int temp = x;
    y = x;
    x = temp;
}
int main()
{
    long long int sum = 0, num, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> num;
        int a[num], b[num];
        for (int i = 0; i < num; i++)
            cin >> a[i];
        for (int i = 0; i < num; i++)
            cin >> b[i];
        long long int sum = 0;
        for (int i = 0; i < num - 1; i++)
        {
            long long int x = abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
            long long int y = abs(b[i] - a[i + 1]) + abs(a[i] - b[i + 1]);
            sum += min(x, y);
        }
        cout << sum << endl;
    }
    return 0;
}