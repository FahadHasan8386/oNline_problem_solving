#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        // Two nested loops
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] + numbers[j] == target) {
                    return {i + 1, j + 1}; // 1-based indexing
                }
            }
        }

        return {}; // No solution found
    }
};

int main() {
    Solution sol;

    int n, target;
    cin >> n >> target;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<int> result = sol.twoSum(numbers, target);

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No two numbers found!" << endl;
    }

    return 0;
}
