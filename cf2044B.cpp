///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string s1 = s;
        reverse(s1.begin(), s1.end());

        int n = s1.size();

        for (int i = 0; i < n; i++) {
            if (s1[i] == 'p') {
                s1[i] = 'q';
            } else if (s1[i] == 'q') {
                s1[i] = 'p';
            }
        }
        cout << s1 << endl;
    }

    return 0;
}
