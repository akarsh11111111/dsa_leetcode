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
						board[i][j] = num;

						if (backtrack(board)) return true;

						board[i][j] = '.';
					}
				}

				return false;
			}
		}

		return true;
	}

	bool isValid(vector<vector<char>>& board, int row, int col, char num) {
		for (int i = 0; i < 9; ++i) {
			if (board[row][i] == num) return false;
			if (board[i][col] == num) return false;
		}

		int boxRow = (row / 3) * 3;
		int boxCol = (col / 3) * 3;

		for (int i = boxRow; i < boxRow + 3; ++i) {
			for (int j = boxCol; j < boxCol + 3; ++j) {
				if (board[i][j] == num) return false;
			}
		}

		return true;
	}
};
