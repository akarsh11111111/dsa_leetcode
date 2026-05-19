#include <string>

using namespace std;

// LeetCode #43: Multiply Strings
// Multiply two non-negative integer strings.
// Time Complexity: O(n * m)
// Space Complexity: O(n + m)
class Solution {
public:
	string multiply(string num1, string num2) {
		if (num1 == "0" || num2 == "0") return "0";
