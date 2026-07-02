#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

// LeetCode #128: Longest Consecutive Sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;
        for (int x: nums){
            if (!s.count(x)) continue;
            s.erase(x);
            int cur = 1;
            int left = x-1; while (s.count(left)) { s.erase(left--); cur++; }
            int right = x+1; while (s.count(right)) { s.erase(right++); cur++; }
