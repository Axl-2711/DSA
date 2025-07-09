#include <iostream>
using namespace std;

int main() {

    class Solution
    {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size();
            if (n == 0)
            return 0;

            int maxLength = 0;
            int start = 0;
            int charIndex[256] = {0}; // ASCII character set

            for (int i = 0; i < n; i++) {
                if (charIndex[s[i]] > start) {
                    start = charIndex[s[i]];
                }
                charIndex[s[i]] = i + 1; // Store the next index of the character
                maxLength = max(maxLength, i - start + 1);
            }

            return maxLength;
        }
    };

    Solution solution;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int result = solution.lengthOfLongestSubstring(input);
    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}