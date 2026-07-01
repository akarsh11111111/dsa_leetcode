#include <string>
#include <vector>
#include <unordered_set>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #127: Word Ladder (shortest transformation length)
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return 0;
        queue<string> q; q.push(beginWord); int steps=1;
        while (!q.empty()){
            int sz=q.size();
            while (sz--){
                string w=q.front(); q.pop();
                for (int i=0;i<w.size();++i){
                    char orig = w[i];
                    for (char c='a';c<='z';++c){
                        w[i]=c;
                        if (w==endWord) return steps+1;
                        if (dict.count(w)) { q.push(w); dict.erase(w); }
                    }
                    w[i]=orig;
                }
            }
            steps++;
        }
