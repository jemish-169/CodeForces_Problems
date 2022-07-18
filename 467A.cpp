/*
George and Accommodation
*/
#include <bits/stdc++.h>
using namespace std;

class room
{
public:
    int a = 0, b = 0;
    bool set_room()
    {
        cin >> a >> b;
        if (a <= b - 2)
            return true;
        else
            return false;
    }
};
int main()
{
    int n, flag = 0;
    cin >> n;
    room r1[n];
    for (int i = 0; i < n; i++)
    {
        if (r1[i].set_room())
            flag++;
    }
    cout << flag;

    return 0;
}