#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);

    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    for(int i = 1 ; i < 4 ; i++)
    {
        int ans = v[0] - v[i];
        cout << ans << " ";
    }
}
