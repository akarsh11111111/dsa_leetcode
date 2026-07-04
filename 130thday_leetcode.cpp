#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #130: Surrounded Regions
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
