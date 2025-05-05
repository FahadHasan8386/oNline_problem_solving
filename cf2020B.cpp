/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

void fahad() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(all(a));

    for (int i = 0; i < m; i++) {
        int cnt = upper_bound(all(a), b[i]) - a.begin();
        cout << cnt << " ";
    }
    cout << endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) fahad();
}
