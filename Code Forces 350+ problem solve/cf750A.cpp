#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int n ,k;
    cin >> n >> k;

    int c =  240 - k;
    int x = 0 ,y = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        x += i * 5;
        if(x <= c)
        {
            y++;
        }
    }
    cout << y << endl;
}
