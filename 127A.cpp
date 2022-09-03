/*
Wasted Time
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
double maxi = 0;
double mini = 0;
int32_t main()
{
    double cases = 1, k;
    cin >> cases >> k;
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cases--;
    while (cases--)
    {
        cin >> x2 >> y2;
        mini += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        x1 = x2;
        y1 = y2;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    cout << mini * 0.02 * k;
    return 0;
}