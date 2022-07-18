/*
Do not be distracted!
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int n, flag = 0, cases = 0;
    cin >> cases;
    while (cases--)
    {
        cin >> n >> s1;
        for (int i = 0; i < n; i++)
            if (s1[i] != s1[i - 1])
            {
                s2 += s1[i];
                flag++;
            }
        sort(s2.begin(), s2.end());
        int k;
        for (k = 0; k < flag; k++)
            if (s2[k] == s2[k - 1])
            {
                cout << "NO" << endl;
                break;
            }
        if (k == flag)
            cout << "YES" << endl;
        s2 = "";
        flag = 0;
    }
    return 0;
}