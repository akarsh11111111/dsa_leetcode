#include <string>
#include <vector>
#include <limits>
#include <iostream>
using namespace std;

// LeetCode #132: Palindrome Partitioning II (min cuts)
class Solution {
public:
    int minCut(const string& s) {
        int n = s.size();
        if (n<=1) return 0;
        vector<vector<bool>> pal(n, vector<bool>(n,false));
        for (int i=n-1;i>=0;--i) for (int j=i;j<n;++j)
            pal[i][j] = (s[i]==s[j]) && (j-i<2 || pal[i+1][j-1]);
        vector<int> dp(n+1, INT_MAX); dp[0]=-1;
