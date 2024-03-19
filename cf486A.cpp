#include <iostream>
using namespace std;
long long calculateF(long long n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return -(n + 1) / 2;
}

int main() {
    long long n;
        cin >> n;

    long long result = calculateF(n);
        cout << result << endl;

    return 0;
}
