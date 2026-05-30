#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #102: Binary Tree Level Order Traversal
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q; q.push(root);
        while (!q.empty()){
            int sz = q.size(); vector<int> row;
            while (sz--){ TreeNode* n = q.front(); q.pop(); row.push_back(n->val);
                if (n->left) q.push(n->left); if (n->right) q.push(n->right);
            }
            res.push_back(row);
        }
        return res;
    }
};

int main() { return 0; }
