#include <vector>

using namespace std;

// LeetCode #46: Permutations
// Generate all permutations of array.
// Time Complexity: O(n * n!)\n// Space Complexity: O(n!)
class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> result;
		backtrack(nums, 0, result);
		return result;
	}

private:
	void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
		if (start == static_cast<int>(nums.size())) {
			result.push_back(nums);
			return;
		}

		for (int i = start; i < static_cast<int>(nums.size()); ++i) {
			swap(nums[start], nums[i]);
			backtrack(nums, start + 1, result);
			swap(nums[start], nums[i]);
		}
	}
};
