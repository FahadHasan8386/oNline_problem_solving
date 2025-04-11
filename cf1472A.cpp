/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

bool canCut(int w, int h, int n) {
    int pieces = 1;


    while (w % 2 == 0) {
        w /= 2;
        pieces *= 2;
    }


    while (h % 2 == 0) {
        h /= 2;
        pieces *= 2;
    }


    return pieces >= n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;

        if (canCut(w, h, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
