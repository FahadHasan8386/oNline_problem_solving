#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a , b ,c ,d;

    cin >> a >> b >> c >> d;

    int result = max((3*a)/10 ,a-a/250*c);
    int result2 = max((3*b)/10 ,b-b/250*d);

    if(result == result2)
    {
        cout << "Tie" <<endl;
    }
    else if(result > result2)
    {
        cout <<"Misha" << endl;
    }
    else{
        cout << "Vasya" << endl;
    }
}
