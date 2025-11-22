#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.first != p2.first)
        return p1.first > p2.first;
    return p1.second < p2.second;
}

void print(const vector<pair<int, int>>& v) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}

int main() {
    int n, j;
    cin >> n >> j;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    int cnt = 0;
    for (const auto& u : v) {
        if (u == v[j-1]) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
