#include <vector>

using namespace std;

// LeetCode #27: Remove Element
// Remove all instances of val in-place.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int write = 0;

		for (int read = 0; read < static_cast<int>(nums.size()); ++read) {
			if (nums[read] != val) {
				nums[write] = nums[read];
				++write;
			}
		}

		return write;
	}
};
