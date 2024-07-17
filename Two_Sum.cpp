#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0;
    // vector<int> v;
    int right = nums.size() - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            return {left, right};
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return {};
}
int main()
{
    vector<int> v{
        2, 7, 11, 15};
    vector<int> output = twoSum(v, 9);
    for (auto it : output)
    {
        cout << it << " ";
    }
}