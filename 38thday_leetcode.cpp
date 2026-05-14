#include <string>

using namespace std;

// LeetCode #38: Count and Say
// Generate count-and-say sequence.
// Time Complexity: O(n * len)
// Space Complexity: O(len)
class Solution {
public:
	string countAndSay(int n) {
		string result = "1";

		for (int i = 1; i < n; ++i) {
			result = nextSequence(result);
		}

		return result;
	}
