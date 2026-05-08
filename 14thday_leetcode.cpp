#include <string>
#include <vector>

using namespace std;

// LeetCode #14: Longest Common Prefix
// Find longest common prefix among array of strings.
// Time Complexity: O(n * m)
// Space Complexity: O(1) extra
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty()) {
			return "";
		}

		string prefix = strs[0];
		for (int i = 1; i < static_cast<int>(strs.size()); ++i) {
			while (strs[i].find(prefix) != 0) {
				prefix.pop_back();
				if (prefix.empty()) {
					return "";
				}
			}
		}

		return prefix;
	}
};
