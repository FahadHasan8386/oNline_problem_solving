#include <bits/stdc++.h>
using namespace std;

void fahad() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> v(k);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x % k].push_back(i + 1);
    }

    int cnt = -1;
    for (int i = 0; i < k; i++) {
        if ((int)v[i].size() == 1) {
            cnt = v[i][0];
            break;
        }
    }

    if (cnt == -1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << cnt << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        fahad();
    }
}
