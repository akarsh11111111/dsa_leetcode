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
        if (matrix.empty() || matrix[0].empty()) return res;
        int top = 0, bottom = matrix.size()-1;
        int left = 0, right = matrix[0].size()-1;
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; ++j) res.push_back(matrix[top][j]);
            ++top;
            for (int i = top; i <= bottom && left <= right; ++i) res.push_back(matrix[i][right]);
            --right;
            if (top <= bottom) {
                for (int j = right; j >= left; --j) res.push_back(matrix[bottom][j]);
                --bottom;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; --i) res.push_back(matrix[i][left]);
                ++left;
