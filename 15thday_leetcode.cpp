#include <vector>
#include <algorithm>

using namespace std;

// LeetCode #15: 3Sum
// Find all unique triplets that sum to zero.
// Time Complexity: O(n^2)
// Space Complexity: O(1) excluding output
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> result;

		for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
			if (i > 0 && nums[i] == nums[i - 1]) continue;
			if (nums[i] > 0) break;

			int left = i + 1;
			int right = nums.size() - 1;
