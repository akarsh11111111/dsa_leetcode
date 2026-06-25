#include <algorithm>
#include <limits>
#include <iostream>
using namespace std;

// LeetCode #124: Binary Tree Maximum Path Sum
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
    int best = numeric_limits<int>::min();
public:
    int maxPathSum(TreeNode* root) { best = numeric_limits<int>::min(); helper(root); return best; }
    int helper(TreeNode* node){
        if (!node) return 0;
