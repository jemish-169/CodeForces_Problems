/*
Taxi
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, data, num, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> data;
        switch (data)
        {
        case 1:
            s1++;
            break;

        case 2:
            s2++;
            break;

        case 3:
            s3++;
            break;
        case 4:
            s4++;
            break;
        default:
            break;
        }
    }
    sum += s4 + s3 + s2 / 2;
    s1 -= s3;

    if (s2 % 2 == 1)
    {
        sum++;
        s1 -= 2;
    }
    if (s1 > 0)
    {
        sum += (s1 + 3) / 4;
    }
    cout << sum;
    return 0;
}
