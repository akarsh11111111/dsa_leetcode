#include <string>

using namespace std;

// LeetCode #32: Longest Valid Parentheses
// Find length of longest valid parentheses substring.
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
	int longestValidParentheses(string s) {
		vector<int> dp(s.size(), 0);
		int maxLen = 0;

		for (int i = 1; i < static_cast<int>(s.size()); ++i) {
