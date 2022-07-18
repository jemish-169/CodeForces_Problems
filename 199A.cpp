/*
Hexadecimal's theorem
*/
#include <bits/stdc++.h>
using namespace std;
set<int> st;
int sum(0), i = 0, j = 1;
void fib(int num)
{
    while (i <= num + 10)
    {
        st.insert(sum);
        sum = i + j;
        i = j;
        j = sum;
    }
}
int main()
{
    int num = 0;
    cin >> num;
    fib(num);
    if (st.find(num) == st.end())
        cout << "I'm too stupid to solve this problem";
    else
        cout << 0 << " " << 0 << " " << num;
    return 0;
}