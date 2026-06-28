#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #126: Word Ladder II (find all shortest transformation sequences)
// Note: uses BFS + backtracking (may be heavy but acceptable as template)
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        vector<vector<string>> res;
        if (!dict.count(endWord)) return res;
        unordered_map<string, vector<string>> prev;
        unordered_set<string> current{beginWord};
        bool found=false;
        while (!current.empty() && !found){
            unordered_set<string> next;
            for (auto &w: current) dict.erase(w);
            for (auto &w: current){
                string s = w;
                for (int i=0;i<s.size();++i){
                    char orig = s[i];
                    for (char c='a';c<='z';++c){
                        s[i]=c;
                        if (!dict.count(s)) continue;
                        next.insert(s);
                        prev[s].push_back(w);
                        if (s==endWord) found=true;
                    }
                    s[i]=orig;
                }
            }
