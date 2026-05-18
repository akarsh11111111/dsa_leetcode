#include <vector>

using namespace std;

// LeetCode #41: First Missing Positive
// Find first missing positive integer.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {
		int n = nums.size();

		for (int i = 0; i < n; ++i) {
			while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
				swap(nums[i], nums[nums[i] - 1]);
			}
		}
