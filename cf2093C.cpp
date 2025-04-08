///In the name of Allah

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll number) {
    if (number < 2) return false;
    for (ll i = 2; i * i <= number; i++)
        if (number % i == 0) return false;
    return true;
}

void fahad() {
    ll baseNumber;
    int repeatCount;
    cin >> baseNumber >> repeatCount;

    if (repeatCount == 1) {
        cout << (isPrime(baseNumber) ? "YES" : "NO") << endl;
    } else {
        if (baseNumber == 1 && repeatCount == 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    for (int currentCase = 0; currentCase < t; ++currentCase)
    {
        fahad();
    }
}

