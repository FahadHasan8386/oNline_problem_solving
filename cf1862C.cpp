#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        if (a[1] != n) { cout << "NO\n"; continue; }

        vector<int> b;
        for (int i = n; i >= 1; i--)
            while ((int)b.size() < a[i]) b.push_back(i);

        cout << (equal(a.begin()+1, a.end(), b.begin()) ? "YES\n" : "NO\n");
    }
}
