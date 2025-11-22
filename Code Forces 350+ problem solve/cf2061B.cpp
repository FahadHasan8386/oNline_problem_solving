/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'

void fahad() {
    int n;
    cin >> n;
    map<int, int> freq;
    vector<int> sticks(n);

    for (int i = 0; i < n; i++) {
        cin >> sticks[i];
        freq[sticks[i]]++;
    }

    vector<int> usable;

    // Collect all values that appear at least twice
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        int val = it->first;
        int cnt = it->second;
        if (cnt >= 4) {
            // If count >= 4, we can use two pairs of same stick
            usable.push_back(val);
            usable.push_back(val);
        }
        else if (cnt >= 2) {
            // If count >= 2, we can use one pair
            usable.push_back(val);
        }
    }

    sort(usable.rbegin(), usable.rend()); // descending sort

    if (usable.size() < 2) {
        cout << -1 << endl;
        return;
    }

    int a = usable[0];
    int b = usable[1];
    cout << a << " " << a << " " << b << " " << b << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
