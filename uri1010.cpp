#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int code1 ,units1 ,code2 ,units2;
    float price1 ,price2;
        cin >>code1 >>units1 >>price1;
        cin >>code2 >>units2 >>price2;

    float result = (price1*units1) + (price2*units2);
    cout << fixed ;
    cout <<setprecision (2)<<"VALOR A PAGAR: R$ " <<result  <<endl;
}
