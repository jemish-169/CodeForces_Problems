/*
Games
*/
#include <bits/stdc++.h>
using namespace std;
class Game
{
public:
    int a, b;
};
int main()
{
    int cases = 0, x, y, flag = 0;
    cin >> cases;
    Game g[cases];
    for (int i = 0; i < cases; i++)
    {
        cin >> g[i].a >> g[i].b;
        int j = i;
        while (j--)
        {
            if (g[j].a == g[i].b)
                flag++;

            if (g[i].a == g[j].b)
                flag++;
        }
    }
    cout << flag << endl;

    return 0;
}