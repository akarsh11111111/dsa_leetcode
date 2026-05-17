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
