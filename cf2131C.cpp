/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'


ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}

void fahad()
{


    /// Generate a random 32-bit integer RD once for XOR operation
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> dist(1, INT_MAX);
    int RD = dist(rng);

    int n, k;
    cin >> n >> k;
    vector<int> A(n), B(n);
    for (int &x : A) cin >> x;
    for (int &x : B) cin >> x;

    unordered_map<int, int> cnt;

    for (int x : A)
    {
        int r = x % k;
        int key = min(r, k - r) ^ RD;
        cnt[key]++;
    }
    for (int x : B)
    {
        int r = x % k;
        int key = min(r, k - r) ^ RD;
        cnt[key]--;
    }

    bool ok = true;
    for (auto &[key, val] : cnt)
    {
        if (val != 0)
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << '\n';


}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--) fahad();

}
