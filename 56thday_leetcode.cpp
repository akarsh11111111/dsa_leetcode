#include <vector>
using namespace std;

// LeetCode #56: Merge Intervals
// Problem: Merge all overlapping intervals.
// Approach: Sort by start and merge sequentially.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.empty()) return res;
        sort(intervals.begin(), intervals.end());
        res.push_back(intervals[0]);
        for (size_t i = 1; i < intervals.size(); ++i) {
            auto &last = res.back();
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
            } else {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
