#include <vector>
using namespace std;

// LeetCode #62: Unique Paths
// Problem: Count unique paths from top-left to bottom-right in an m x n grid.
// Approach: DP combinatorics or 1D DP. We'll use 1D DP for O(n) space.

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);
        for (int i = 1; i < m; ++i)
            for (int j = 1; j < n; ++j)
                dp[j] += dp[j-1];
        return dp[n-1];
    }
};
