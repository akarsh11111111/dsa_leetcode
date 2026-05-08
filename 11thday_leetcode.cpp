#include <vector>
#include <algorithm>

using namespace std;

// LeetCode #11: Container With Most Water
// Find two lines that form container with most water.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
	int maxArea(vector<int>& height) {
		int left = 0;
		int right = height.size() - 1;
		int maxWater = 0;

		while (left < right) {
			int currentHeight = min(height[left], height[right]);
			int width = right - left;
			int currentWater = currentHeight * width;
			maxWater = max(maxWater, currentWater);

			if (height[left] < height[right]) {
				++left;
			} else {
				--right;
			}
		}

		return maxWater;
