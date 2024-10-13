#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long sum = v[0];
        long long maxi = v[0];
        int par = abs(v[0]) % 2;

        for (int i = 1; i < n; i++) {
            if (abs(v[i]) % 2 != par) {
                sum += v[i];
            } else {
                maxi = max(maxi, sum);
                sum = v[i];
            }
            par = abs(v[i]) % 2;
        }

        maxi = max(maxi, sum);

        cout << maxi << endl;
    }

    return 0;
}
