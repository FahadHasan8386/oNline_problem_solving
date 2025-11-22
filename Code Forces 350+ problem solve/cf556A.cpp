///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cnt0++;
        } else if (s[i] == '1') {
            cnt1++;
        }
    }

    int result = abs(cnt0 - cnt1);
    cout << result << endl;

    return 0;
}
