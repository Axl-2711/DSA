#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int maxSubArray(vector<int> &nums)
        {
            int k = 3;
            int n = nums.size();
            int sum = 0;
            int maxsum = INT_MIN;
            if (n < 3)
                return INT_MIN;
            for (int i = 0; i < n - k + 1; i++)
            {
                sum = nums[i] + nums[i + 1] + nums[i + 2];
                maxsum = max(sum, maxsum);
            }
            return maxsum;
        }
    };

    Solution sol;
    vector<int> nums = {-2, 1, -3, -4, -1, 2, 1, -5, 4};
    int maxSum = sol.maxSubArray(nums);
    cout << "Max Subarray Sum: " << maxSum << endl;

    return 0;
}