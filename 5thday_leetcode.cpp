#include <string>
#include <utility>

using namespace std;

// LeetCode #5: Longest Palindromic Substring
// Aapko ek string s di hoti hai.
// Hume longest aisi substring return karni hoti hai jo palindrome ho.
// Palindrome matlab jo left se aur right se same read ho.

// Example 1:
// s = "babad"
// Answer = "bab" ("aba" bhi valid hai)

// Example 2:
// s = "cbbd"
// Answer = "bb"

// Note:
// 1) Substring continuous hoti hai.
// 2) Multiple valid answers ho sakte hain; unme se koi ek return kar sakte hain.

// Approach: Expand Around Center.
// Har index ko center maan kar palindrome expand karte hain:
// 1) Odd length palindrome ke liye center = (i, i)
// 2) Even length palindrome ke liye center = (i, i + 1)
// 3) Jitna match mile utna expand karo, aur longest range update karte raho.
// Time Complexity: O(n^2)
// Space Complexity: O(1)
class Solution {
private:
	// Left aur right se expand karke palindrome ki boundaries return karta hai.
	pair<int, int> expandFromCenter(const string& s, int left, int right) {
		while (left >= 0 && right < static_cast<int>(s.size()) && s[left] == s[right]) {
			left--;
			right++;
		}

		// Loop break ke baad valid palindrome (left+1 ... right-1) hota hai.
		return {left + 1, right - 1};
	}

public:
	string longestPalindrome(string s) {
		if (s.empty()) {
			return "";
		}

		int bestStart = 0;
		int bestEnd = 0;

		for (int i = 0; i < static_cast<int>(s.size()); i++) {
			// Odd length palindrome check.
			auto odd = expandFromCenter(s, i, i);
			if (odd.second - odd.first > bestEnd - bestStart) {
				bestStart = odd.first;
				bestEnd = odd.second;
			}

			// Even length palindrome check.
			auto even = expandFromCenter(s, i, i + 1);
			if (even.second - even.first > bestEnd - bestStart) {
				bestStart = even.first;
				bestEnd = even.second;
			}
		}

		return s.substr(bestStart, bestEnd - bestStart + 1);
	}
};
