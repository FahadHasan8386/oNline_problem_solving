#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long b, a;
        cin >> b >> a;

        long long answer = -1;


        if((a + b) % 2 == 0) {
            answer = a + b;
        }


        if(a % 2 == 1 && b % 2 == 1) {
            long long value = a * b + 1;
            if(value > answer) {
                answer = value;
            }
        }


        if(a % 2 == 0 && (a % 4 == 0 || b % 2 == 0)) {
            long long value = 2 + (a * b) / 2;
            if(value > answer) {
                answer = value;
            }
        }

        cout << answer << "\n";
    }
}
