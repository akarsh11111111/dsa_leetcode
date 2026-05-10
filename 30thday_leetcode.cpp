#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// LeetCode #30: Substring with Concatenation of All Words
// Find all indices where a substring consisting of all words appears.
// Time Complexity: O(n * m)
// Space Complexity: O(k)
class Solution {
public:
	vector<int> findSubstring(string s, vector<string>& words) {
		vector<int> result;
		if (words.empty()) return result;

		unordered_map<string, int> wordCount;
		for (const string& word : words) {
			wordCount[word]++;
		}

		int wordLen = words[0].size();
		int totalLen = wordLen * words.size();

		for (int i = 0; i + totalLen <= static_cast<int>(s.size()); ++i) {
