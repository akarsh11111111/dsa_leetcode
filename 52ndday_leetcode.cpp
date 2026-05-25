#include <vector>
using namespace std;

// LeetCode #52: N-Queens II
// Problem: Count the number of distinct solutions to the n-queens puzzle.
// Approach: Backtracking similar to N-Queens, but increment a counter when
// a full placement is found. Use boolean arrays for columns and diagonals.

class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        vector<int> queens(n, -1);
        vector<bool> cols(n, false);
        vector<bool> diag1(2*n-1, false);
        vector<bool> diag2(2*n-1, false);
        backtrack(0, n, queens, cols, diag1, diag2, count);
        return count;
