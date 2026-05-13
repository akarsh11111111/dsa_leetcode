#include <vector>
#include <string>

using namespace std;

// LeetCode #36: Valid Sudoku
// Check if 9x9 Sudoku board is valid.
// Time Complexity: O(1) - constant 81 cells
// Space Complexity: O(1)
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		vector<vector<bool>> rows(9, vector<bool>(9, false));
		vector<vector<bool>> cols(9, vector<bool>(9, false));
		vector<vector<bool>> boxes(9, vector<bool>(9, false));

		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				if (board[i][j] == '.') continue;

				int num = board[i][j] - '1';
				int boxIdx = (i / 3) * 3 + (j / 3);

				if (rows[i][num] || cols[j][num] || boxes[boxIdx][num]) {
					return false;
				}

				rows[i][num] = true;
				cols[j][num] = true;
				boxes[boxIdx][num] = true;
			}
