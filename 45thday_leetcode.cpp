#include <vector>

using namespace std;

// LeetCode #45: Jump Game II
// Find minimum number of jumps to reach last index.
// Time Complexity: O(n)\n// Space Complexity: O(1)
class Solution {
public:
	int jump(vector<int>& nums) {
		int jumps = 0;
		int currentMax = 0;
		int nextMax = 0;

		for (int i = 0; i < static_cast<int>(nums.size()) - 1; ++i) {
			nextMax = max(nextMax, i + nums[i]);

			if (i == currentMax) {
				jumps++;
				currentMax = nextMax;
			}
		}
