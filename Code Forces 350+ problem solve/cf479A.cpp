#include<iostream>
using namespace std;

int main ()
{
    int a ;
    int b ;
    int c ;
        cin >> a >> b >> c;

    int ans1 = a + b * c;
    int ans2 = a * ( b + c);
    int ans3 = a * b * c ;
    int ans4 = (a + b)* c;
    int ans5 = a + b + c;

    int result = max(ans4,max (ans2,max(ans3,max(ans1,ans5))));

        cout << result;
}
