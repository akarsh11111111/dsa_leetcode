#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #140: Word Break II (all sentences)
class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        unordered_map<int, vector<string>> memo;
        function<vector<string>(int)> dfs = [&](int idx){
            if (memo.count(idx)) return memo[idx];
