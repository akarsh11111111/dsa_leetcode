#include <vector>

using namespace std;

// LeetCode #37: Sudoku Solver
// Solve a 9x9 Sudoku board using backtracking.
// Time Complexity: O(9^(9*9)) worst case
// Space Complexity: O(1) excluding recursion
class Solution {
public:
	void solveSudoku(vector<vector<char>>& board) {
		backtrack(board);
	}

private:
	bool backtrack(vector<vector<char>>& board) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				if (board[i][j] != '.') continue;

				for (char num = '1'; num <= '9'; ++num) {
					if (isValid(board, i, j, num)) {
