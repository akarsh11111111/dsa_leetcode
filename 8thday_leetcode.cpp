#include <climits>

using namespace std;

// LeetCode #9: Palindrome Number
// Aapko integer x diya hota hai.
// Check karna hai ki number palindrome hai ya nahi.
// Palindrome ka matlab: left se right aur right se left same.

// Example 1:
// x = 121
// Answer = true

// Example 2:
// x = -121
// Answer = false
// Kyunki reverse karne par sign mismatch ho jata hai.

// Example 3:
// x = 10
// Answer = false
// Kyunki reverse representation 01 hoti hai, jo 10 ke equal nahi.

// Approach: Half reverse technique (overflow-safe and efficient)
// 1) Negative numbers palindrome nahi ho sakte.
// 2) Jo numbers 0 pe end hote hain (except 0), wo palindrome nahi hote.
// 3) Number ka sirf half reverse karo aur compare karo.
// Time Complexity: O(log10(x))
// Space Complexity: O(1)
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}

		int reversedHalf = 0;
		while (x > reversedHalf) {
			int digit = x % 10;
			reversedHalf = reversedHalf * 10 + digit;
			x /= 10;
		}

		// Even digits: x == reversedHalf
		// Odd digits: middle digit ignore karne ke liye reversedHalf / 10
		return (x == reversedHalf) || (x == reversedHalf / 10);
	}
};
