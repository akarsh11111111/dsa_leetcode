#include <string>

using namespace std;

// LeetCode #44: Wildcard Matching
// Implement wildcard pattern matching.
// Time Complexity: O(n * m)
// Space Complexity: O(n * m)
class Solution {
public:
	bool isMatch(string s, string p) {
		int n = s.size();
		int m = p.size();
		vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

		dp[0][0] = true;

