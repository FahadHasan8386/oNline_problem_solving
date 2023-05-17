#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double A , B , C;
    cin>>A;
    cin>>B;
    cin>>C;
    double average = ((A*2)  + (B*3) + (C*5)) / 10;
    cout<<fixed;

      cout << "MEDIA = "  <<setprecision(1)<< average <<endl;
}
