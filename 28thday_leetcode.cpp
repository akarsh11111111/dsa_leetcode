#include <string>

using namespace std;

// LeetCode #28: Find the Index of the First Occurrence in a String
// Return index of first occurrence of needle in haystack.
// Time Complexity: O(n * m)
// Space Complexity: O(1)
class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.empty()) return 0;

		int n = haystack.size();
		int m = needle.size();

		for (int i = 0; i + m <= n; ++i) {
			int j = 0;
			while (j < m && haystack[i + j] == needle[j]) {
				++j;
			}
