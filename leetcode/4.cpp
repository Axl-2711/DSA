#include <bits/stdc++.h>
using namespace std;
int main()
{

    class Solution
    {
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> v;
            for (auto num : nums1)
            {
                v.push_back(num);
            }
            for (auto num : nums2)
            {
                v.push_back(num);
            }
            sort(v.begin(), v.end());
            int n = v.size();
            if (n % 2 != 0)
                return v[n / 2];
            else
                return (v[(n / 2) - 1] + v[n / 2]) / 2.0;
        }
    };

    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2, 5, 7};
    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}