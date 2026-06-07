#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;

    for (int i = 0; i < 31; i++)
    {
        if (n == pow(2, i))
            return true;
    }

    return false;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << n << " is a Power of Two." << endl;
    }
    else
    {
        cout << n << " is NOT a Power of Two." << endl;
    }

    return 0;
}
