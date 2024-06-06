#include <iostream>
using namespace std;


bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


int nextPrime(int n) {
    int candidate = n + 1;
    while (!isPrime(candidate)) {
        ++candidate;
    }
    return candidate;
}

int main() {
    int n, m;
    cin >> n >> m;


    int next_prime = nextPrime(n);


    if (next_prime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
