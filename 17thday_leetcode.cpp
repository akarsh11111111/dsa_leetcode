#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// LeetCode #17: Letter Combinations of a Phone Number
// Return all letter combinations from phone keypad.
// Time Complexity: O(4^n)
// Space Complexity: O(4^n)
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		if (digits.empty()) return {};

		unordered_map<char, string> mapping = {
			{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
			{'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
		};

		vector<string> result = {""};

		for (char digit : digits) {
			vector<string> temp;
