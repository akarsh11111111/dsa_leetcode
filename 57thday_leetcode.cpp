#include <vector>
using namespace std;

// LeetCode #57: Insert Interval
// Problem: Insert a new interval into a set of non-overlapping intervals and
// merge if necessary.
// Approach: Walk through intervals, add those before new interval, merge overlaps,
// then add remaining.

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i = 0, n = intervals.size();
        while (i < n && intervals[i][1] < newInterval[0]) res.push_back(intervals[i++]);
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            ++i;
