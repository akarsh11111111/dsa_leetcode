#include <unordered_map>
#include <vector>

using namespace std;

// LeetCode #1: Two Sum
// Aapko ek array diya hota hai nums aur ek target value.
// Aapko aise 2 indices return karne hote hain jinke elements ka sum target ke equal ho.

// Example:
// nums = [2, 7, 11, 15], target = 9
// Output = [0, 1]
// Kyuki 2 + 7 = 9.

// Note:

// Har input ka exactly ek valid answer hota hai.
// Same element ko do baar use nahi kar sakte.
//
// Question: nums array aur target diya hai; aise 2 indices return karo jinka sum = target ho.
// Constraint yaad rakho: same element ko do baar use nahi karna, aur exactly one valid answer hota hai.
// Approach: one-pass hash map.
// 1) Har element ke liye need = target - nums[i] nikaalo.
// 2) Agar need map me pehle se hai, answer mil gaya: {map[need], i}.
// 3) Nahi to current value ka index map me store kar do.
// Time Complexity: O(n) average, kyuki ek pass + map lookup/insert average O(1).
// Space Complexity: O(n), worst case me map me n elements store ho sakte hain.
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> seen;

		for (int i = 0; i < static_cast<int>(nums.size()); i++) {
			// Jo value chahiye complement ke form me.
			int need = target - nums[i];

			if (seen.find(need) != seen.end()) {
				// Complement pehle mil chuka hai, dono indices return.
				return {seen[need], i};
			}

			// Current value ka latest index store/update.
			seen[nums[i]] = i;
		}

		return {};
	}
};
