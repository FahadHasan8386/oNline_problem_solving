#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    double n , m , a;
        cin >> n >> m >> a;
    long long rows =ceil(n / a);

    long long coloum = ceil(m / a);

    long long result = rows * coloum;

        cout << result << endl;
}
