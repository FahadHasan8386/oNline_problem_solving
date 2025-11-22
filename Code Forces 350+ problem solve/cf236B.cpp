#include <bits/stdc++.h>
using namespace std;
const int Mod = 1073741824;

int divisor(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    long long combination;
    long long totalDivisors = 0;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                combination = i * j * k;
                totalDivisors += divisor(combination)% Mod;
            }
        }
    }
    cout << totalDivisors << endl;
    return 0;
}

