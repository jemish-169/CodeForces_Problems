/*
Parallelepiped
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = sqrt(a * c / b);
    int s2 = sqrt(a * b / c);
    int s3 = sqrt(b * c / a);
    cout << 4 * (s1 + s2 + s3);
    return 0;
}