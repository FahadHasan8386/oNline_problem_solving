///In the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int fahad()
{
    int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &i : a) cin >> i;

        vector<long long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

        bool found = false;
        for (long long x : primes) {
            bool ok = false;
            for (long long i : a) {
                if (__gcd(i, x) == 1) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << x << endl;
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << endl;
    return 0;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        fahad();
    }
}
