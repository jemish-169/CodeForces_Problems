/*
Case of the Zeros and Ones
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ct1(0), ct0(0), len = 0;
    string str;
    cin >> len >> str;
    for (int i = 0; i < len; i++)
        str[i] == '1' ? ct1++ : ct0++;
    cout << len - (2 * min(ct1, ct0));
    return 0;
}