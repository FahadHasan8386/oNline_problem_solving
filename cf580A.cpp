#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz, cnt = 1, m = 1;
    cin >> sz;
    vector<int> arr(sz);

    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < sz; i++) {
        if (arr[i] >= arr[i - 1]) {
            cnt++;
            m = max(m, cnt);
        } else {
            cnt = 1;
        }
    }
    cout << m;
    return 0;
}
