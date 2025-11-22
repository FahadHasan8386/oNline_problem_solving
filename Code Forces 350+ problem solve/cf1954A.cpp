#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b == 1) {
            // If there is only one color, no need to repaint
            cout << "NO" << endl;
        } else {
            // Calculate the number of maximum parts per color
            int max_parts_per_color = (a + b - 1) / b;
            if (c >= a - max_parts_per_color) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
