#include <string>
#include <vector>
#include <iostream>
using namespace std;

// LeetCode #131: Palindrome Partitioning
class Solution {
public:
    vector<vector<string>> partition(const string& s) {
        int n = s.size();
        vector<vector<string>> res;
        vector<string> cur;
        vector<vector<bool>> pal(n, vector<bool>(n,false));
        for (int i=n-1;i>=0;--i){
            for (int j=i;j<n;++j){
                if (s[i]==s[j] && (j-i<2 || pal[i+1][j-1])) pal[i][j]=true;
            }
        }
        function<void(int)> dfs = [&](int idx){
            if (idx==n){ res.push_back(cur); return; }
            for (int j=idx;j<n;++j) if (pal[idx][j]){
                cur.push_back(s.substr(idx,j-idx+1)); dfs(j+1); cur.pop_back();
