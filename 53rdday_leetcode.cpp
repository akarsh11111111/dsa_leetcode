#include <vector>
using namespace std;

// LeetCode #53: Maximum Subarray
// Problem: Given an integer array, find the contiguous subarray with the largest sum.
// Approach: Kadane's algorithm — track current max ending here and global max.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int cur = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            cur = max(nums[i], cur + nums[i]);
