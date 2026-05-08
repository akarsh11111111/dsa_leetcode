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
