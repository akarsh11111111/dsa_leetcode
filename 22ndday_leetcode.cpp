#include <string>
#include <vector>

using namespace std;

// LeetCode #22: Generate Parentheses
// Generate all combinations of well-formed parentheses.
// Time Complexity: O(4^n / sqrt(n))
// Space Complexity: O(n)
class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> result;
		backtrack(result, "", 0, 0, n);
		return result;
	}

