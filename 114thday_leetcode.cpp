#include <iostream>
using namespace std;

// LeetCode #114: Flatten Binary Tree to Linked List
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* cur = root;
        while (cur) {
            if (cur->left) {
                TreeNode* pre = cur->left;
                while (pre->right) pre = pre->right;
                pre->right = cur->right;
                cur->right = cur->left; cur->left = nullptr;
            }
