#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// LeetCode #120: Triangle (minimum total)
class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        if (tri.empty()) return 0;
        vector<int> dp = tri.back();
        for (int i=(int)tri.size()-2;i>=0;i--){
            for (int j=0;j<tri[i].size();j++) dp[j] = tri[i][j] + min(dp[j], dp[j+1]);
        }
        return dp[0];
    }
};

//int main() { return 0; }
