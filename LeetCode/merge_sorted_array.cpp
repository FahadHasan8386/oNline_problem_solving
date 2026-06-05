#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    int m, n;

    cout << "Enter m: ";
    cin >> m;

    vector<int> nums1(m);

    cout << "Enter " << m << " elements of nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums2(n);

    cout << "Enter " << n << " elements of nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    nums1.resize(m + n, 0);

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
