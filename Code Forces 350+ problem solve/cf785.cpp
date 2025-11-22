#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
        cin >> t;
    string s;
    int sum = 0;
    for (int i = 0 ; i < t ; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            sum = sum + 4;
        }
        else if (s == "Cube")
        {
            sum = sum + 6;
        }
        else if (s == "Octahedron")
        {
            sum = sum + 8;
        }
        else if (s == "Dodecahedron")
        {
            sum = sum + 12;
        }
        else if (s == "Icosahedron")
        {
            sum = sum + 20;
        }
    }
    cout << sum;
}
