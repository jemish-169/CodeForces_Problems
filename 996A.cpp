/*
Hit the Lottary
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num = 0, flags = 0;
    cin >> num;
    while (num)
    {
        if (num >= 100)
        {
            flags += num / 100;
            num %= 100;
        }
        else if (num >= 20)
        {
            flags += num / 20;
            num %= 20;
        }
        else if (num >= 10)
        {
            flags += num / 10;
            num %= 10;
        }
        else if (num >= 5)
        {
            flags += num / 5;
            num %= 5;
        }
        else if (num >= 1)
        {
            flags++;
            num--;
        }
    }
    cout << flags << endl;

    return 0;
}