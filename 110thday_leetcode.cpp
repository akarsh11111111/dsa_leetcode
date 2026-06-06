#include <algorithm>
#include <iostream>
using namespace std;

// LeetCode #110: Balanced Binary Tree
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
    int height(TreeNode* node){
        if (!node) return 0;
        int lh = height(node->left); if (lh==-1) return -1;
