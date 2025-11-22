///In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void solve(long long a, long long b) {
    long long lcm = (a / __gcd(a, b)) * b;
    long long re;

    if (lcm == b) {
        re = lcm * b / a;
        cout << re << endl;
    } else {
        re = (a / __gcd(a, b)) * b;
        cout << re << endl;
    }
}

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        long long a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
