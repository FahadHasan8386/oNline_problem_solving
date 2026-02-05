#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                return nums1[i];
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {2, 4};
    cout << sol.getCommon(n1, n2) << endl;
    return 0;
}
