#include <string>

using namespace std;

// LeetCode #10: Regular Expression Matching
// Implement regex matching with '.' and '*'.
// '.' matches any single character
// '*' matches zero or more of the preceding element
// Time Complexity: O(m * n)
// Space Complexity: O(m * n)
class Solution {
public:
	bool isMatch(string s, string p) {
		int m = s.size();
		int n = p.size();
		vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

		dp[0][0] = true;

		for (int j = 2; j <= n; ++j) {
			if (p[j - 1] == '*') {
				dp[0][j] = dp[0][j - 2];
			}
		}

		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (p[j - 1] == '*') {
					dp[i][j] = dp[i][j - 2] || (dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
				} else {
					dp[i][j] = dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
				}
			}
		}

		return dp[m][n];
	}
};
