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

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long oddSize = n / 2;
        long long evenSize = (n + 1) / 2;

        long long oddS = 0, evenS = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evenS += v[i];
            } else {
                oddS += v[i];
            }
        }


        if (oddS % oddSize == 0 && evenS % evenSize == 0 && (oddS / oddSize == evenS / evenSize)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
