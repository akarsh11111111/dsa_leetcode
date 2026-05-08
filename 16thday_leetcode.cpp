#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// LeetCode #16: 3Sum Closest
// Find triplet closest to target sum.
// Time Complexity: O(n^2)
// Space Complexity: O(1) excluding output
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int closest = INT_MAX;

		for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
