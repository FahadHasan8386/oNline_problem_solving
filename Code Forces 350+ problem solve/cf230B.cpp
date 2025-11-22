#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(long long number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (long long i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}


bool isSqrtPrime(long long num) {
    long long sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num) && isPrime(sqrtNum);
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long number;
        cin >> number;

        if (isSqrtPrime(number)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
