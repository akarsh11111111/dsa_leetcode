#include <vector>

using namespace std;

// LeetCode #40: Combination Sum II
// Find combinations (each element used once) that sum to target.
// Time Complexity: O(2^n)
// Space Complexity: O(1)
class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		sort(candidates.begin(), candidates.end());
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

