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
