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
