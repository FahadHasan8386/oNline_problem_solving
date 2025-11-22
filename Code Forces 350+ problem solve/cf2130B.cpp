/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    int sumT = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sumT += a[i];
        if (a[i] == 0) cnt0++;
        else if (a[i] == 1) cnt1++;
        else cnt2++;
    }

    int D = s - sumT;


    if (s < sumT) {
        for (int x : a) cout << x << " ";
        cout << "\n";
        return;
    }

    if (D == 0) {
        cout << -1 << "\n";
        return;
    }

    if (D == 1) {

        for (int i = 0; i < cnt0; i++) cout << 0 << " ";
        for (int i = 0; i < cnt2; i++) cout << 2 << " ";
        for (int i = 0; i < cnt1; i++) cout << 1 << " ";
        cout << "\n";
        return;
    }

    cout << -1 << "\n";
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
}
