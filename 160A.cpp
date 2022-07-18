/*
twins
*/
#include <bits/stdc++.h>
using namespace std;
class datasets
{
public:
    datasets(int x)
    {
        int arr[x];
        for (int i = 0; i < x; i++)
            cin >> arr[i];
        for (int i = 0; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int sum = 0, sum1 = 0, flag = 0;
        for (int i = 0; i < x; i++)
            sum += arr[i];
        for (int i = 0; i < x; i++)
        {
            // cout << sum << " " << sum1 << " " << flag << endl;
            sum -= arr[i];
            sum1 += arr[i];
            flag++;
            if (sum1 > sum)
            {
                cout << flag;
                break;
            }
        }
    }
};
int main()
{
    int d;
    cin >> d;
    datasets d1(d);
    return 0;
}