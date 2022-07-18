/*
Die Roll
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int k = max(a, b) - 1;
    stringstream ss;
    ss << 6 - k;
    string s;
    ss >> s;
    s += "/6";
    if (s == "2/6")
        cout << "1/3";
    else if (s == "3/6")
        cout << "1/2";
    else if (s == "4/6")
        cout << "2/3";
    else if (s == "6/6")
        cout << "1/1";
    else if (s == "0/6")
        cout << "1/1";
    else
        cout << s;
    return 0;
}