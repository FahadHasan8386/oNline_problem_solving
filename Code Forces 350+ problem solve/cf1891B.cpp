/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        vector<int> x(q);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < q; i++) cin >> x[i];

        for (int i = 0; i < q; i++) {
            long long div = (1LL << x[i]);       // 2^xi
            long long add = (1LL << (x[i] - 1)); // 2^(xi-1)

            for (int j = 0; j < n; j++) {
                if (a[j] % div == 0) {
                    a[j] += add;
                }
            }
        }

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}
