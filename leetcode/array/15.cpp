#include <bits/stdc++.h>
using namespace std;

int main()
{

    class Solution
    {
    public:
        vector<vector<int>> threeSum(vector<int> &nums)
        {

            vector<vector<int>> result;
            sort(nums.begin(), nums.end());
            int n = nums.size();

            for (int i = 0; i < n - 2; i++)
            {
                if (i > 0 && nums[i] == nums[i - 1])
                    continue;
                int left = i + 1, right = n - 1;

                while (left < right)
                {
                    int sum = nums[i] + nums[left] + nums[right];
                    if (sum < 0)
                    {
                        left++;
                    }
                    else if (sum > 0)
                    {
                        right--;
                    }
                    else
                    {
                        result.push_back({nums[i], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++; 
                        while (left < right && nums[right] == nums[right - 1])
                            right--; 
                        left++;
                        right--;
                    }
                }
            }

            return result;
        }
    };

    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -2, 1};
    vector<vector<int>> result = sol.threeSum(nums);

    for (const auto &triplet : result)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}