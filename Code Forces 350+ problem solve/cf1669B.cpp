#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> count;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
        }

        int result = -1;
        for (const auto &pair : count) {
            if (pair.second >= 3) {
                result = pair.first;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
