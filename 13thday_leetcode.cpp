#include <string>
#include <unordered_map>

using namespace std;

// LeetCode #13: Roman to Integer
// Convert Roman numeral string to integer.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> value = {
			{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
			{'C', 100}, {'D', 500}, {'M', 1000}
