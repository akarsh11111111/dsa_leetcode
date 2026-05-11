#include <vector>

using namespace std;

// LeetCode #33: Search in Rotated Sorted Array
// Search target in rotated sorted array.
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size() - 1;

