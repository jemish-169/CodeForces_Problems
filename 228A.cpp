/*
Is your horseshoe on the other hoof?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int flag = 0, shoes[4];
    for (int i = 0; i < 4; i++)
        cin >> shoes[i];
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {

            if (shoes[j] == shoes[i])
            {
                flag++;
                break;
            }
        }
    }
    cout << flag;
    return 0;
}