#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int start = 0, end = 0, current_time = 0, max_books = 0;

    while (end < n) {
        current_time += a[end];
        while (current_time > t) {
            current_time -= a[start];
            start++;
        }
        max_books = max(max_books, end - start + 1);
        end++;
    }

    cout << max_books << endl;
    return 0;
}
