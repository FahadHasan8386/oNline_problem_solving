#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
long long a[N];
int b[N];
int n, k;

void testcase() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> b[i];

    long long ans = 0;

    sort(a + 1, a + n + 1);
    sort(b + 1, b + k + 1);


    for (int i = 1; i <= n; i++)
        ans += a[i];

    long long id = n + 1;


    for (int i = 1; i <= k; i++) {
        id -= b[i]; ///Group er ses item free
        if (id >= 1)
            ans -= a[id]; ///sesh otem cost bad
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}
