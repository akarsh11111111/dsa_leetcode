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
