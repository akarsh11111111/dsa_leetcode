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
			{100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
			{10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
		};

		string result;
		for (auto& p : values) {
			while (num >= p.first) {
				result += p.second;
				num -= p.first;
