/// IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long sum) {
    for (long long i = 1; i * i <= sum; i++) {
        if (i * i == sum) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if (isPerfectSquare(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
