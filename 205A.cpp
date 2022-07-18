/*
Little Elephant and Rozdil
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int32_t main()
{
    int n, time, min_time(10e8 + 1), min_index(0), count(1);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> time;
        if (time < min_time)
        {
            count = 1;
            min_index = i;
            min_time = time;
        }
        else if (time == min_time)
        {
            count++;
        }
    }
    if (count > 1)
        cout << "Still Rozdil";
    else
        cout << min_index << endl;
    return 0;
}