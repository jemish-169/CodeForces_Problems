/*
Arrival of the General
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, min = 0, max = 0, flag = 0;
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
        if (a[min] >= a[i])
            min = i;
        if (a[max] < a[i])
            max = i;
    }
// cout << min << " " << max << endl;
jemish:
    if (min > max)
    {
        while (min != num - 1)
        {
            int temp = a[min];
            a[min] = a[min + 1];
            a[min + 1] = temp;
            flag++;
            min++;
        }
        while (max != 0)
        {
            int temp = a[max];
            a[max] = a[max - 1];
            a[max - 1] = temp;
            flag++;
            max--;
        }
    }
    else
    {
        int diff = max - min;
        while (diff != 1)
        {
            int temp = a[min];
            a[min] = a[min + 1];
            a[min + 1] = temp;
            flag++;
            min++;
            diff = max - min;
        }
        int temp = a[min];
        a[min] = a[min + 1];
        a[min + 1] = temp;
        flag++;
        min++;
        max--;
        if (min > max)
            goto jemish;
    }
    cout << flag;
    return 0;
}