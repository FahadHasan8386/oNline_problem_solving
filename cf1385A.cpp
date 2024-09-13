///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;


        int a = max(x, max(y, z));
        int b = min(x, min(y, z));
        int c = x + y + z - a - b;


        if (a == c) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
