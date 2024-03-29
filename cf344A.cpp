#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int sz;
        cin >> sz;
    int num1[sz];
    int counter = 0;
    for (int i = 0; i < sz ; i++)
    {
        cin >> num1[i];
    }
    for (int i = 0 ; i < sz ; i++)
    {
        if(num1[i] != num1[i + 1]){
            counter++;
        }
    }
    cout << counter;
}
