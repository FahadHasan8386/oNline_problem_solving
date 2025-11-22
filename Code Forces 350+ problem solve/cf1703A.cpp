#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string word;
        cin >> word;

        for(char &c : word) {
            c = tolower(c);
        }

        if (word == "yes") {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}
