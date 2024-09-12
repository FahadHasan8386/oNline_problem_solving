///IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long sum) {
    if (sum < 0) return false;

    long long low = 0, high = sum;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == sum) {
            return true;
        } else if (square < sum) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
