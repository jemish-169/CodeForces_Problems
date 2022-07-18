/*
Casimir's String Solitaire
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int a(0), b(0), c(0);
        string str;
        cin >> str;
        if (str.size() % 2 == 0)
        {
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == 'B')
                    b++;
                if (str[i] == 'C')
                    c++;
                if (str[i] == 'A')
                    a++;
            }
            if (b == str.size() / 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            continue;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}