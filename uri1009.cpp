#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    string employee_name ;
    //cout << "Employee Name :" ;
    cin >> employee_name;
    double total_salary , total_sales;
    //cout << "total salary :" ;
    cin >> total_salary;
    cout <<fixed;
    //cout << "total sales:";
    cin >> total_sales;
    double total = (total_sales * 0.15) + total_salary;
    cout <<"TOTAL = R$ " << setprecision(2)<<total <<endl;


}
