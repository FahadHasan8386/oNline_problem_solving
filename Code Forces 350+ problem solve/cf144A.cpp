#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    // Find the index of the tallest and shortest soldiers
    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 1; i < n; i++) {
        if (heights[i] > heights[maxIdx]) {
            maxIdx = i;
        }
        if (heights[i] <= heights[minIdx]) {
            minIdx = i;
        }
    }

    // Calculate total swaps
    int swaps = maxIdx + (n - 1 - minIdx);

    // Adjust for overlap
    if (maxIdx > minIdx) {
        swaps--;
    }

    cout << swaps << endl;
    return 0;
}
