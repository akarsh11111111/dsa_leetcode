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
