/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void fahad()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n + 1);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i <= n; i++) cin >> b[i];

    ll sum = 0, ext = 1e18;

    for (int i = 0; i < n; i++) {

        sum += abs(a[i] - b[i]);
        ext = min(ext, abs(a[i] - b[n]));
        ext = min(ext, abs(b[i] - b[n]));

        if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
            ext = 0;
    }

    cout << sum + ext + 1 << endl;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
        fahad();
}
