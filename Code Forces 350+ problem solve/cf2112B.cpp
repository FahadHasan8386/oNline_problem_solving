/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define endl '\n'


bool is_beautiful(const vector<int>& arr) {
    if(arr.size() < 2 )return false;
    for(int i = 0 ; i < arr.size() - 1 ;i++)
    {
        if(abs(arr[i] - arr[i+1]) <= 1)
            return true;
    }
    return false;
}


bool is_sortedF(const vector<int>& arr) {
    return is_sorted(arr.begin(), arr.end());
}

bool is_sortedR(const vector<int>& arr) {
    return is_sorted(arr.rbegin(), arr.rend());
}

void fahad() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    if (is_beautiful(v)) {
        cout << 0 << endl;
    }
    else if (is_sortedF(v) || is_sortedR(v)) {
        cout << -1 << endl;
    }
    else {
        cout << 1 << endl;
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) fahad();
}
