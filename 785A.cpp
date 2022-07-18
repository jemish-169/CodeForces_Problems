/*
Anton and Polyhedrons
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0, flags = 0;
    cin >> cases;
    string s;
    while (cases--)
    {
        cin >> s;
        if (s == "Tetrahedron")
            flags += 4;
        else if (s == "Cube")
            flags += 6;
        else if (s == "Octahedron")
            flags += 8;
        else if (s == "Dodecahedron")
            flags += 12;
        else if (s == "Icosahedron")
            flags += 20;
    }
    cout << flags << endl;
    return 0;
}