#include <vector>

using namespace std;

// LeetCode #47: Permutations II
// Generate all unique permutations with duplicates.
// Time Complexity: O(n * n!)\n// Space Complexity: O(n!)
class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> result;
		vector<bool> used(nums.size(), false);
		vector<int> path;
		backtrack(nums, used, path, result);
		return result;
	}

