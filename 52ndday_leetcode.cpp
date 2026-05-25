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
    }

private:
    void backtrack(int row, int n, vector<int>& queens,
                   vector<bool>& cols, vector<bool>& diag1,
                   vector<bool>& diag2, int& count) {
        if (row == n) { ++count; return; }
        for (int col = 0; col < n; ++col) {
            int d1 = row + col;
            int d2 = row - col + (n-1);
            if (cols[col] || diag1[d1] || diag2[d2]) continue;
            queens[row] = col;
            cols[col] = diag1[d1] = diag2[d2] = true;
            backtrack(row+1, n, queens, cols, diag1, diag2, count);
            cols[col] = diag1[d1] = diag2[d2] = false;
            queens[row] = -1;
        }
    }
};
