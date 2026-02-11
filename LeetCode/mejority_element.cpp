#include <iostream>
#include <vector>
#include <map>

using namespace std;

int majorityElement(vector<int>& nums) {
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int n = nums.size();

    for (auto it : mp) {
        if (it.second > n / 2) {
            return it.first;
        }
    }
    return -1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found." << endl;

    return 0;
}

