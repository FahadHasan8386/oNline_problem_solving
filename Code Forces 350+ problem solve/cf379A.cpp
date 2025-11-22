///IN the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int total_hours = a;

    while (a/b != 0) {
        //total_hours += a;
        total_hours += a / b;

        a = (a / b) + a  % b;
    }

    cout << total_hours << endl;
    return 0;
}
