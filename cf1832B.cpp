#include <bits/stdc++.h>
using namespace std;

void fahad() {
    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    long long mainSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<long long>prefix(n + 1 ,0);
    for (int i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + v[i];
    }

    long long maxSum = 0;

    for (int i = 0; i <= k; i++) {
        int totalRemoved = 2 * i + (k - i);
        if (totalRemoved > n) continue;

        long long removedSmallest = prefix[2 * i];
        long long removedLargest = prefix[n] - prefix[n - (k - i)];
        long long currentSum = prefix[n] - removedSmallest - removedLargest;
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        fahad();
    }

    return 0;
}



