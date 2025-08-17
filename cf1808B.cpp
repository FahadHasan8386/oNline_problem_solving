/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    ll total = 0;

    for (int j = 0; j < m; j++) {
        vector<int> col(n);
        for (int i = 0; i < n; i++)
            col[i] = matrix[i][j];

        sort(col.begin(), col.end());

        ll prefix_sum = 0, col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += 1LL * col[i] * i - prefix_sum;
            prefix_sum += col[i];
        }
        total += col_sum;
    }

    cout << total << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
}
