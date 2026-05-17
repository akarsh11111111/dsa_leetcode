#include <vector>

using namespace std;

// LeetCode #39: Combination Sum
// Find combinations that sum to target.
// Time Complexity: O(N^(T/M))
// Space Complexity: O(T/M)
class Solution {
public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> result;
		vector<int> path;
		backtrack(candidates, target, 0, path, result);
		return result;
	}

private:
	void backtrack(vector<int>& candidates, int target, int start, vector<int>& path, vector<vector<int>>& result) {
		if (target == 0) {
			result.push_back(path);
			return;
		}

		if (target < 0) return;

		for (int i = start; i < static_cast<int>(candidates.size()); ++i) {
			path.push_back(candidates[i]);
