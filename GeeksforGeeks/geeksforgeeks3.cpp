#include <iostream>
#include <set>
using namespace std;

multiset<int> multisetInsert(int arr[], int n);
void multisetDisplay(const multiset<int>& s);
void multisetErase(multiset<int>& s, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        multiset<int> s = multisetInsert(arr, n);
        multisetDisplay(s);
        int x;
        cin >> x;

        multisetErase(s, x);
        multisetDisplay(s);
    }
    return 0;
}

multiset<int> multisetInsert(int arr[], int n) {
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    return s;
}

void multisetDisplay(const multiset<int>& s) {
    for (auto u : s) cout << u << " ";
    cout << endl;
}

void multisetErase(multiset<int>& s, int x) {
    if (s.count(x) >= 1) {
        s.erase(x); // This will erase all occurrences of x
        cout << "erased " << x;
    } else {
        cout << "not found";
    }
    cout << endl;
}
