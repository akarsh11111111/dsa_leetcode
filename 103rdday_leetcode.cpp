#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #103: Binary Tree Zigzag Level Order Traversal
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<TreeNode*> q; q.push(root); bool leftToRight = true;
        while (!q.empty()){
            int sz = q.size(); vector<int> row(sz);
            for (int i=0;i<sz;i++){
                TreeNode* n = q.front(); q.pop();
                int idx = leftToRight ? i : (sz-1-i);
                row[idx] = n->val;
                if (n->left) q.push(n->left); if (n->right) q.push(n->right);
            }
            leftToRight = !leftToRight; res.push_back(row);
        }
        return res;
    }
};

//int main() { return 0; }
