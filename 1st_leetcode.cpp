#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> seen;

		for (int i = 0; i < static_cast<int>(nums.size()); i++) {
			int need = target - nums[i];

			if (seen.find(need) != seen.end()) {
				return {seen[need], i};
			}

			seen[nums[i]] = i;
		}

		return {};
	}
};
