/*
sum of round numbers
*/
#include <bits/stdc++.h>
using namespace std;
int nonzero(int data)
{
    int i, flag = 0;
    while (data)
    {
        i = data % 10;
        if (i != 0)
            flag++;
        data /= 10;
    }
    return flag;
}
void print(int data, int k)
{
    int h, i = 1;
    while (data)
    {
        h = data % 10;
        data /= 10;
        i *= 10;
        if (h == 0)
            continue;
        cout << (h * i) / 10 << " ";
    }
}
int main()
{
    int data, cases;
    cin >> cases;
    while (cases--)
    {
        cin >> data;
        int k = nonzero(data);
        cout << k << endl;
        print(data, k);
        cout << endl;
    }

    return 0;
}