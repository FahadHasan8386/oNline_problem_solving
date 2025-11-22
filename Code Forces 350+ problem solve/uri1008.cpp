#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int employee_number ;
    int worked_hour;
    float employee_rate;
        cin >> employee_number ;
        cin >> worked_hour;
        cin >> employee_rate;
    float salary = worked_hour * employee_rate;
        cout<<fixed;
        cout << "NUMBER = " << employee_number << endl;
        cout << "SALARY = U$ " << setprecision(2) << salary << endl;

}
