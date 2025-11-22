#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double R;
        cin >> R;
    double pi = 3.14159;
    double volume = ((4/3.0) * pi * (R*R*R));
        cout <<fixed;
        cout <<setprecision(3)<<"VOLUME = " <<volume <<endl;
}
