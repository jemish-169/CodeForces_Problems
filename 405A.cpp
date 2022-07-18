/*
Gravity Flip
*/
#include <bits/stdc++.h>
using namespace std;
void display(list<int> my_list)
{
    list<int>::iterator it;
    for (it = my_list.begin(); it != my_list.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    int num = 0, data;
    cin >> num;
    list<int> mylist;
    for (int i = 0; i < num; i++)
    {
        cin >> data;
        mylist.push_back(data);
    }
    mylist.sort();
    display(mylist);
    return 0;
}