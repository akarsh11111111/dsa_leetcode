#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #107: Binary Tree Level Order Traversal II
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q; q.push(root);
        while (!q.empty()){
            int sz = q.size(); vector<int> row;
            while (sz--){ TreeNode* n = q.front(); q.pop(); row.push_back(n->val);
                if (n->left) q.push(n->left); if (n->right) q.push(n->right);
            }
            res.insert(res.begin(), row);
        }
        return res;
