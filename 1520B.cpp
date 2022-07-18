/*
Ordinary Numbers
*/
#include <bits/stdc++.h>
#define maxi 0;
#define mini 10e8 + 10;
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
string s;
int main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int num;
        cin >> num;
        s = to_string(num);
        int y = 1, x = s.length();
        for (int i = 1; i < x; i++)
        {
            y *= 10;
            y++;
        }
        x--;
        cout << (num / y) + 9 * x << endl;
    }
    return 0;
}