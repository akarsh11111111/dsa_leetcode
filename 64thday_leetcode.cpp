#include <vector>
using namespace std;

// LeetCode #64: Minimum Path Sum
// Problem: Given a m x n grid of non-negative numbers, find a path with minimum sum.
// Approach: In-place DP or 1D DP. We'll use 1D DP updating row by row.

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> dp(n, 0);
        dp[0] = grid[0][0];
        for (int j = 1; j < n; ++j) dp[j] = dp[j-1] + grid[0][j];
        for (int i = 1; i < m; ++i) {
            dp[0] += grid[i][0];
            for (int j = 1; j < n; ++j) dp[j] = min(dp[j-1], dp[j]) + grid[i][j];
        }
        return dp[n-1];
    }
};
