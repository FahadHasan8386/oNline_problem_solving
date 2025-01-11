#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const vector<int>& v, const vector<int>& q) {
    int j = 0;
    for (int i = 0; i < v.size() && j < q.size(); i++) {
        if (v[i] == q[j]) {
            j++;
        }
    }
    return j == q.size();
}

void fahad() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++) {
        cin >> q[i];
    }

    if (isSubsequence(v, q)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        fahad();
    }
}
