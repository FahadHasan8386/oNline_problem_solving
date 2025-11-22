#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a, b ,temp;
        cin >> a >> b;

    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }

    cout << a << " ";
    temp = (b-a) / 2;
    cout << temp;
}
