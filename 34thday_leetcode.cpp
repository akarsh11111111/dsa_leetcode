#include <vector>

using namespace std;

// LeetCode #34: Find First and Last Position of Element in Sorted Array
// Find first and last position of target in sorted array.
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int left = findFirst(nums, target);
		int right = findLast(nums, target);
		return {left, right};
	}

private:
