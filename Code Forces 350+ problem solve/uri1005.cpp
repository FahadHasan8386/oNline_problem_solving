#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double A , B ,MEDIA = 0;
    cin>>A;
    cin>>B;
    A = A * 3.5;
    B = B * 7.5;
    MEDIA = (A  + B ) / (3.5 + 7.5);
    cout<<fixed;

      cout << "MEDIA = "  <<setprecision(5)<< MEDIA <<endl;
}
