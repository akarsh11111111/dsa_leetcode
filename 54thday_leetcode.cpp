#include <vector>
using namespace std;

// LeetCode #54: Spiral Matrix
// Problem: Return elements of a matrix in spiral order.
// Approach: Maintain boundaries (top,bottom,left,right) and traverse while
// shrinking boundaries.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
