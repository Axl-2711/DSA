#include <bits/stdc++.h>
using namespace std;

int main()
{

    class Solution
    {
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            unordered_map<int, int> map;
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {
                int temp = target - nums[i];
                if (map.count(temp))
                    return {map[temp], i};
                map[nums[i]] = i;
            }

            return {};
        }
    };


    Solution sol;
    vector<int> arr = {2,3,7,10};
    int target = 9;
    vector<int> ans = sol.twoSum(arr,target);
    
    //print ans
    cout << "Indices of the two numbers that add up to " << target << ": ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}