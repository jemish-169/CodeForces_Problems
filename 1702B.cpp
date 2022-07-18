/*
Polycarp Writes a String from Memory
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
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
        string str;
        int f = 0;
        cin >> str;
        set<int> st;
        for (int i = 0; i < str.size(); i++)
        {
            st.insert(str[i]);
            if (st.size() == 4)
            {
                f++;
                i--;
                st.erase(st.begin(), st.end());
            }
        }
        if (st.size() != 0)
            f++;
        cout << f << endl;
    }
    return 0;
}