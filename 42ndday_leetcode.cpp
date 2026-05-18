#include <vector>

using namespace std;

// LeetCode #42: Trapping Rain Water
// Trap rainwater between elevation bars.
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
	int trap(vector<int>& height) {
		if (height.empty()) return 0;
