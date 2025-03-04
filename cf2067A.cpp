#include <iostream>
using namespace std;

bool is_valid_sum(int x, int y) {

    return ((x + 1 >= y) && ((x + 1) % 9 == y % 9));
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (is_valid_sum(x, y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
