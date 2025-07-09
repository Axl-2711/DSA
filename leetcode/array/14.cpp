#include <bits/stdc++.h>
using namespace std;

int main()
{

    class Solution
    {
    public:
        string longestCommonPrefix(vector<string> &strs)
        {

            if (strs.empty())
                return "";

            string pref = "";
            int pref_len = strs[0].size();
            int i = 0;

            while (i < pref_len)
            {
                for (int j = 0; j < strs.size(); j++)
                {
                    if (strs[j][i] != strs[0][i])
                        return pref;
                }
                pref += strs[0][i];
                i++;
            }
            return pref;
        }
    };

    Solution sol;       

    vector<string> strs = {"flower", "flow", "flight"};
    cout << sol.longestCommonPrefix(strs) << endl;
    strs = {"dog", "racecar", "car"};
    cout << sol.longestCommonPrefix(strs) << endl;  
    strs = {"a", "abbb", "ac"};
    cout << sol.longestCommonPrefix(strs) << endl;
    return 0;
}