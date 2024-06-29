#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        bool has_odd = false, has_even = false;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0) {
                has_even = true;
            } else {
                has_odd = true;
            }
        }

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            if (has_odd && has_even) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
