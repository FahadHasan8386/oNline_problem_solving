#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++) {
            int candy;
            cin >> candy;
            if (candy == 1) {
                count1++;
            } else if (candy == 2) {
                count2++;
            }
        }

        int totalWeight = count1 + 2 * count2;

        if (totalWeight % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int halfWeight = totalWeight / 2;
            if (halfWeight % 2 == 0 || (halfWeight % 2 == 1 && count1 > 0)) {
                if (halfWeight <= count1 + 2 * count2) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
