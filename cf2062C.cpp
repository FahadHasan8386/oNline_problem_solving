/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const ll NEG_INF = -1e18;
ll a[1010];

void fahad() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    int now = n;
    ll ans = NEG_INF;

    for (int step = 1; step <= n; step++) {
        ll sum = 0;
        for (int i = 1; i <= now; i++) sum += a[i];

        if (step == 1) ans = max(ans, sum);
        else ans = max(ans, max(sum, -sum));

        // make difference sequence
        for (int i = 1; i < now; i++) {
            a[i] = a[i + 1] - a[i];
        }
        now--;
    }
    cout << ans << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
