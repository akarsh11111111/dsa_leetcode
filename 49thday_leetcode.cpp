#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

// LeetCode #49: Group Anagrams
// Group anagrams from list of strings.
// Time Complexity: O(n * k log k)
// Space Complexity: O(n * k)
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> map;

		for (const string& str : strs) {
			string sorted_str = str;
			sort(sorted_str.begin(), sorted_str.end());
			map[sorted_str].push_back(str);
		}
