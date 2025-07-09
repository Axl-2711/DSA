#include <bits/stdc++.h>
using namespace std;

int main()
{

    class Solution
    {
    public:
        int maxArea(vector<int> &height)
        {
            int l = 0;
            int r = height.size() - 1;
            int area = 0;
            int maxarea = 0;

            while (l < r)
            {
                int area = min(height[l], height[r]) * (r - l);
                maxarea = max(maxarea, area);

                if (height[l] < height[r])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            return maxarea;
        }
    };

    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4};
    int maxArea = sol.maxArea(height);
    cout << "Max Area: " << maxArea << endl;

    return 0;
}