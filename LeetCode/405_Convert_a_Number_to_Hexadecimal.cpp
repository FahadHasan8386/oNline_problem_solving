/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

string num_to_hex(ll n) {
    string hex = "";
    char hexchar[] = {'0','1','2','3','4','5','6','7',
                      '8','9','A','B','C','D','E','F'};

    while (n > 0) {
        int rem = n % 16;
        hex = string(1, hexchar[rem]) + hex;
        n /= 16;
    }
    if (hex == "") hex = "0";
    return hex;
}

int main() {
    fastio();
    ll num;
    cin >> num;
    cout << num_to_hex(num) << endl;
    return 0;
}
