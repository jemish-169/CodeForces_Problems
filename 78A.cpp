/*
Haiku
*/
#include <bits/stdc++.h>
// #define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int main()
{
    char ch[101];
    int syb[3] = {5, 7, 5};
    bool b = true;
    for (int i = 0; i < 3; ++i)
    {
        cin.getline(ch, sizeof(ch) / sizeof(ch[0]));
        int n = 0;
        for (int j = 0; ch[j] != 0; ++j)
        {
            if (ch[j] == 'a' || ch[j] == 'e' || ch[j] == 'i' || ch[j] == 'o' || ch[j] == 'u')
                n++;
        }
        if (n != syb[i])
            b = false;
    }
    cout << (b ? "YES" : "NO") << endl;
    return 0;
}