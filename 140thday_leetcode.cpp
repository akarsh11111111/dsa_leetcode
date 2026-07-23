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
            vector<string> res;
            if (idx==s.size()) { res.push_back(""); return memo[idx]=res; }
            for (int i=idx+1;i<=s.size();++i){
                string word = s.substr(idx, i-idx);
                if (!dict.count(word)) continue;
                auto tails = dfs(i);
                for (auto &t: tails){
                    string sep = t.empty() ? "" : " ";
                    res.push_back(word + (t.empty()?"":" "+t));
                }
            }
            return memo[idx]=res;
        };
        return dfs(0);
    }
};
