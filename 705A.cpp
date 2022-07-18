/*
Hulk
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string str, s1 = "I hate ", s2 = "I love ", s3 = "that ", s4 = "it";
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 1)
            str += s1;
        else
            str += s2;
        if (i != num)
            str += s3;
    }
    str += s4;
    cout << str;
    return 0;
}