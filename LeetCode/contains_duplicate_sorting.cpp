#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;

        if (mp[nums[i]] > 1)
            return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (containsDuplicate(nums))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
