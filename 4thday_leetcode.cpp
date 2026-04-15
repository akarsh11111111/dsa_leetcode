#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

// LeetCode #4: Median of Two Sorted Arrays
// Aapko do sorted arrays nums1 aur nums2 diye hote hain.
// In dono arrays ko logically merge karke median return karna hota hai.

// Example 1:
// nums1 = [1, 3], nums2 = [2]
// merged = [1, 2, 3]
// Answer = 2.0

// Example 2:
// nums1 = [1, 2], nums2 = [3, 4]
// merged = [1, 2, 3, 4]
// Answer = (2 + 3) / 2 = 2.5

// Note:
// 1) Dono arrays already sorted hain.
// 2) Overall run time O(log(m+n)) hona chahiye.

// Approach: Binary Search on Partition (optimal).
// Idea: Dono arrays me aisa partition choose karo jahan left half me total elements
// right half ke barabar (ya ek zyada) ho, aur left side ke saare elements <= right side.
// 1) Hamesha chhote array par binary search lagao.
// 2) Partition i (nums1) aur j (nums2) choose karo jisse left side me half elements aa jayein.
// 3) Check karo:
//    left1 <= right2  aur  left2 <= right1
//    - Agar true hai, partition correct hai.
//    - Nahi to i ko left/right move karke binary search continue karo.
// 4) Correct partition milte hi:
//    - Odd total: max(left1, left2) median hoga.
//    - Even total: (max(left1, left2) + min(right1, right2)) / 2.0
// Time Complexity: O(log(min(m, n)))
// Space Complexity: O(1)
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		// Binary search hamesha chhote array par chalana best hai.
		if (nums1.size() > nums2.size()) {
			return findMedianSortedArrays(nums2, nums1);
		}

		int m = static_cast<int>(nums1.size());
		int n = static_cast<int>(nums2.size());

		int low = 0;
		int high = m;
		int totalLeft = (m + n + 1) / 2;

		while (low <= high) {
			int i = low + (high - low) / 2;
			int j = totalLeft - i;

			int left1 = (i == 0) ? INT_MIN : nums1[i - 1];
			int right1 = (i == m) ? INT_MAX : nums1[i];
			int left2 = (j == 0) ? INT_MIN : nums2[j - 1];
			int right2 = (j == n) ? INT_MAX : nums2[j];

			if (left1 <= right2 && left2 <= right1) {
				if ((m + n) % 2 == 1) {
					return static_cast<double>(max(left1, left2));
				}

				int leftMax = max(left1, left2);
				int rightMin = min(right1, right2);
				return (leftMax + rightMin) / 2.0;
			}

			if (left1 > right2) {
				high = i - 1;
			} else {
				low = i + 1;
			}
		}

		// Valid sorted input ke saath control yahan nahi aana chahiye.
		return 0.0;
	}
};
