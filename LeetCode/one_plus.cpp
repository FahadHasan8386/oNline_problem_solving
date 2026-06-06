#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> digits(n);

    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    Solution s;
    vector<int> result = s.plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
