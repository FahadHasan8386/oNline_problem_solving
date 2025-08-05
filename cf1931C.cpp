/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

void fahad() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int left = 0;
    while (left < n && v[left] == v[0]) {
        left++;
    }

    int right = 0;
    while (right < n && v[n - 1 - right] == v[n - 1]) {
        right++;
    }

    int result;
    if (v[0] == v[n - 1]) {
        result = n - left - right;
    } else {
        result = n - max(left, right);
    }

    cout << max(0, result) << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        fahad();
    }

    return 0;
}
