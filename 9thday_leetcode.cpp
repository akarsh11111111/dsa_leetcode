#include <climits>

using namespace std;

// LeetCode #9: Palindrome Number
// Check if integer x is a palindrome.
// Do this without converting to string.
// Time Complexity: O(log x)
// Space Complexity: O(1)
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		int reversedHalf = 0;
		while (x > reversedHalf) {
			reversedHalf = reversedHalf * 10 + (x % 10);
			x /= 10;
		}

		return (x == reversedHalf) || (x == reversedHalf / 10);
	}
};
