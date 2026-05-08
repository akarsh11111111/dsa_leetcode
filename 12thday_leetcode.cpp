#include <string>

using namespace std;

// LeetCode #12: Integer to Roman
// Convert integer to Roman numeral string.
// Time Complexity: O(1) - max 3999
// Space Complexity: O(1)
class Solution {
public:
	string intToRoman(int num) {
		vector<pair<int, string>> values = {
			{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
