#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t ;
    cin >> t;

    int Miskha = 0;
    int Chris = 0;

    while (t--)
    {
        int a , b;
        cin >> a >> b ;

        if (a > b){
            Miskha++;
        }
        else if(b > a)
        {
            Chris++;
        }
    }
    if(Miskha > Chris)
    {
        cout << "Mishka";
    }
    else if(Miskha < Chris)
    {
        cout << "Chris";
    }else
    {
        cout << "Friendship is magic!^^";
    }
}
