#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int code1, units1, code2, units2;
    float price1, price2;
        cin>>code1 >>units1 >>price1;
        cin>>code2 >>units2 >>price2;


    float total = (units1 * price1) + (units2 * price2);

        cout<< fixed;
        cout <<setprecision(2)<< "VALOR A PAGAR: R$ " << total<<endl;
}
