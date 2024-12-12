/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long num = sum / n;
        int oddSize = n / 2;
        int evenSize = (n + 1) / 2;

        long long oddS = 0, evenS = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evenS += v[i];
            } else {
                oddS += v[i];
            }
        }


        if (oddS == oddSize * num && evenS == evenSize * num) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
