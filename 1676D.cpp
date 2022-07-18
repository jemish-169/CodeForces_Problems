/*
X-Sum
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int a, x, y, i, j, sum(0), data, maxi(0), b;
        cin >> a >> b;
        int ar[a][b];
        for (x = 0; x < a; x++)
        {
            for (y = 0; y < b; y++)
            {
                cin >> ar[x][y];
            }
        }
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                int n = ar[i][j], p = i, q = j;
                do
                {
                    sum += ar[p][q];
                    p--;
                    q--;
                } while ((p >= 0 && q >= 0));
                p = i;
                q = j;
                do
                {
                    sum += ar[p][q];
                    p++;
                    q++;
                } while ((p < a && q < b));
                p = i;
                q = j;
                do
                {
                    sum += ar[p][q];
                    p++;
                    q--;
                } while ((p >= 0 && q < b));
                p = i;
                q = j;
                do
                {
                    sum += ar[p][q];
                    p--;
                    q++;
                } while ((p < a && q >= 0));
                sum -= 3 * n;
                maxi = max(maxi, sum);
                sum = 0;
            }
        }
        printf("%d\n", maxi);
    }
    return 0;
}