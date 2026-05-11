#include <vector>
#include <algorithm>

using namespace std;

// LeetCode #31: Next Permutation
// Modify array in-place to next lexicographic permutation.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	void nextPermutation(vector<int>& nums) {
		int i = nums.size() - 2;

		while (i >= 0 && nums[i] >= nums[i + 1]) {
			--i;
		}

		if (i >= 0) {
