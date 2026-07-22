#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

// LeetCode #139: Word Break (DP)
class Solution {
public:
    bool wordBreak(const string& s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n = s.size(); vector<bool> dp(n+1,false); dp[0]=true;
