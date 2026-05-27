#include <vector>
using namespace std;

// LeetCode #55: Jump Game
// Problem: Determine if you can reach the last index given jump lengths.
// Approach: Greedy — track the furthest reachable index.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (i > reach) return false;
            reach = max(reach, i + nums[i]);
            if (reach >= (int)nums.size()-1) return true;
        }
        return true;
    }
