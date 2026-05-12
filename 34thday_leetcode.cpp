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
	int findFirst(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;
		int result = -1;

		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (nums[mid] == target) {
				result = mid;
				right = mid - 1;
			} else if (nums[mid] < target) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		return result;
	}

	int findLast(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;
		int result = -1;

		while (left <= right) {
