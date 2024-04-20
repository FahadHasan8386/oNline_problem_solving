#include <bits/stdc++.h>
using namespace std;

bool isComposite(int n) {
    if (n <= 1) return false;
    if (n <= 3) return false;
    if (n % 2 == 0 || n % 3 == 0) return true;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return true;
    }
    return false;
}

int main() {
    int num;
    cin >> num;

    for (int i = 4; i <= num / 2; ++i) {
        if (isComposite(i) && isComposite(num - i)) {
            cout << i << " " << num - i;
            break;
        }
    }

    return 0;
}
