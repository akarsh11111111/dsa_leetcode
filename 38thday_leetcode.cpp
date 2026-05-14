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

private:
	string nextSequence(string seq) {
		string result;
		int count = 1;

		for (int i = 0; i < static_cast<int>(seq.size()); ++i) {
			if (i + 1 < static_cast<int>(seq.size()) && seq[i] == seq[i + 1]) {
				++count;
