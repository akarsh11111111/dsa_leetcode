#include <climits>

using namespace std;

// LeetCode #7: Reverse Integer
// Aapko ek signed 32-bit integer x diya hota hai.
// Uske digits ko reverse karke result return karna hota hai.
// Agar reverse karne par value 32-bit range se bahar chali jaye, to 0 return karna hota hai.

// Example 1:
// x = 123
// Answer = 321

// Example 2:
// x = -123
// Answer = -321

// Example 3:
// x = 120
// Answer = 21

// Note:
// 1) Sign preserve hota hai.
// 2) Overflow/underflow case me 0 return karna hai.

// Approach: Digit by digit reverse with overflow check.
// 1) Har step par last digit lo.
// 2) Answer ko 10 se multiply karke digit add karo.
// 3) Har multiplication/addition se pehle check karo ki int range cross to nahi hogi.
// Time Complexity: O(log10(|x|))
// Space Complexity: O(1)
class Solution {
public:
	int reverse(int x) {
		long long reversed = 0;

		while (x != 0) {
			int digit = x % 10;
			x /= 10;

			reversed = reversed * 10 + digit;

			if (reversed < INT_MIN || reversed > INT_MAX) {
				return 0;
			}
		}

		return static_cast<int>(reversed);
	}
};