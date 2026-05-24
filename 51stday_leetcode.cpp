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
