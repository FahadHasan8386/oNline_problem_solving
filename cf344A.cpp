#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int sz;
        cin >> sz;
    int num1[sz];

    for (int i = 0; i < sz ; i++)
    {
        cin >> num1[i];
        if (num1[i] != num1[i + 1])
        {
            cout << num1[i];

        }
    }
return 0;
}
