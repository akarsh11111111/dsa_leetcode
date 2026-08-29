#include <vector>
using namespace std;

// LeetCode #63: Unique Paths II
// Problem: Count unique paths with obstacles (1 indicates obstacle).
// Approach: 1D DP where dp[j] = 0 if obstacle, else dp[j] + dp[j-1].

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) return 0;
        int n = obstacleGrid[0].size();
        vector<int> dp(n, 0);
        dp[0] = obstacleGrid[0][0] == 0 ? 1 : 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (obstacleGrid[i][j] == 1) dp[j] = 0;
                else if (j > 0) dp[j] += dp[j-1];
            }
        }
        return dp[n-1];
    }
};
