#include <vector>
#include <string>
#include <iostream>

using namespace std;

// LeetCode #51: N-Queens
// Problem:
// Given an integer n, return all distinct solutions to the n-queens puzzle.
// Each solution contains an n x n board configuration of the placement of the
// queens, where 'Q' and '.' both indicate a queen and an empty space respectively.
// Example (n = 4):
// [
//  [".Q..",
//   "...Q",
//   "Q...",
//   "..Q."],
//  ["..Q.",
//   "Q...",
//   "...Q",
//   ".Q.."]
// ]
//
// Approach (Backtracking):
// We place queens row by row. For each row we try every column and check if
// placing a queen at (row, col) conflicts with any previously placed queen.
// To test conflicts in O(1) we maintain three boolean arrays:
// - `cols[col]` for occupied columns,
// - `diag1[row+col]` for occupied "main" diagonals,
// - `diag2[row-col + (n-1)]` for occupied "anti" diagonals.
// When we place a queen we mark those three arrays and recurse to the next row.
// On backtrack we unmark them. When row == n we have a valid solution and
// construct the board from the stored queen positions.
//
// Time Complexity: O(k) where k is number of generated placements (roughly O(n!))
// Space Complexity: O(n) for recursion and bookkeeping arrays.
//
// I implemented the standard backtracking solution using vectors of booleans
// and a vector<int> `queens` storing the column index for the queen in each row.

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> queens(n, -1);
        vector<bool> cols(n, false);
        vector<bool> diag1(2 * n - 1, false); // row + col
        vector<bool> diag2(2 * n - 1, false); // row - col + (n-1)

        backtrack(0, n, queens, cols, diag1, diag2, res);
        return res;
    }

private:
    void backtrack(int row, int n, vector<int>& queens,
                   vector<bool>& cols, vector<bool>& diag1,
                   vector<bool>& diag2, vector<vector<string>>& res) {
        if (row == n) {
            res.push_back(buildBoard(queens, n));
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row + col;
            int d2 = row - col + (n - 1);
            if (cols[col] || diag1[d1] || diag2[d2]) continue;

            // place
            queens[row] = col;
            cols[col] = diag1[d1] = diag2[d2] = true;

