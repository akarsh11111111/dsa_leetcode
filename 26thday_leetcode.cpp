#include <vector>

using namespace std;

// LeetCode #26: Remove Duplicates from Sorted Array
// Remove duplicates in-place, return new length.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) return 0;
