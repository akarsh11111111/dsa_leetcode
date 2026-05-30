#include <iostream>
using namespace std;

// LeetCode #101: Symmetric Tree
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return check(root->left, root->right);
    }
    bool check(TreeNode* a, TreeNode* b){
