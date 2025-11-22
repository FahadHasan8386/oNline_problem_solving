#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int max_blank_space = 0;
        int current_blank_space = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                current_blank_space++;
                max_blank_space = max(max_blank_space, current_blank_space);
            } else {
                current_blank_space = 0;
            }
        }

        cout << max_blank_space << endl;
    }

    return 0;
}
