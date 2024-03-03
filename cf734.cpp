#include <bits/stdc++.h>
using namespace std;

int main() {
    int sz;
    cin >> sz;

    string input;
        cin >> input;

    int cntA = 0;
    int cntD = 0;
    for (int i = 0; i < sz; i++) {
        if (input[i] == 'A') {
            cntA++;
        } else if (input[i] == 'D') {
            cntD++;
        }
        }

    if (cntA > cntD) {
        cout << "Anton";
    } else if (cntD > cntA) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

    return 0;
}

