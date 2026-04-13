#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

// LeetCode #3: Longest Substring Without Repeating Characters
// Aapko ek string s di hoti hai.
// Hume longest aisi substring ki length return karni hoti hai
// jisme koi character repeat na ho.

// Example:
// s = "abcabcbb"
// Answer = 3
// Kyuki "abc" longest substring hai without repeating chars.

// Note:
// 1) Substring continuous hoti hai (subsequence nahi).
// 2) Empty string ka answer 0 hota hai.

// Approach: Sliding Window + last seen index map.
// Window [left ... right] maintain karte hain jisme repeating char nahi hona chahiye.
// Har step par s[right] ka last index check karte hain:
// - Agar wo current window ke andar milta hai, to left ko aage shift kar dete hain.
// - Fir current window length nikal kar max update karte hain.
// Time Complexity: O(n), kyuki right pointer ek baar traverse karta hai,
// aur left pointer bhi sirf aage badhta hai.
// Space Complexity: O(min(n, charset)), map me last seen indices store hote hain.
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> lastSeen;
		int left = 0;
		int best = 0;

		for (int right = 0; right < static_cast<int>(s.size()); right++) {
			char ch = s[right];

			// Agar character current window me repeat ho raha hai,
			// to left boundary ko uske next index par le jao.
			if (lastSeen.find(ch) != lastSeen.end() && lastSeen[ch] >= left) {
				left = lastSeen[ch] + 1;
			}

			// Current character ka latest index store karo.
			lastSeen[ch] = right;

			// Current valid window length se best update karo.
			best = max(best, right - left + 1);
		}

		return best;
	}
};
