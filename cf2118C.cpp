#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll beauty(ll x) {
    return __builtin_popcountll(x);
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;

    // initial beauty
    ll ans = 0;
    for (ll x : a) ans += beauty(x);

    // সব upgrade অপশন বের করি
    vector<pair<ll,ll>> upgrades; // {cost, gain}
    for (ll x : a) {
        for (int bit = 0; bit <= 60; bit++) {
            ll target = (1LL << (bit+1)) - 1;
            if (target <= x) continue;
            ll cost = target - x;
            if (cost > k) continue; // k এর বাইরে হলে দরকার নাই
            ll gain = beauty(target) - beauty(x);
            if (gain > 0) upgrades.push_back({cost, gain});
        }
    }

    // dp[c] = max gain with cost ≤ c
    vector<ll> dp(k+1, 0);
    for (auto [cost, gain] : upgrades) {
        for (ll c = k; c >= cost; c--) {
            dp[c] = max(dp[c], dp[c-cost] + gain);
        }
    }

    ll bestGain = *max_element(dp.begin(), dp.end());
    cout << ans + bestGain << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();
}
