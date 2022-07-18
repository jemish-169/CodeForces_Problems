/*
Dragons
*/
#include <bits/stdc++.h>
using namespace std;
class abc
{
public:
    int x, y;
};
int main()
{
    int i, hp, n;
    cin >> hp >> n;
    abc arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i].x >> arr[i].y;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j].x < arr[i].x)
            {
                abc temp;
                temp.x = arr[j].x;
                temp.y = arr[j].y;
                arr[j].x = arr[i].x;
                arr[j].y = arr[i].y;
                arr[i].x = temp.x;
                arr[i].y = temp.y;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    //     cout << arr[i].x << " " << arr[i].y << endl;
    for (i = 0; i < n; i++)
    {
        if (hp > arr[i].x)
            hp += arr[i].y;
        else
        {
            cout << "NO";
            break;
        }
    }
    if (i == n)
        cout << "YES";
    return 0;
}