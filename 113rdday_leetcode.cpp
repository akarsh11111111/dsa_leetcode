#include <vector>
#include <iostream>
using namespace std;

// LeetCode #113: Path Sum II (collect paths)
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    vector<vector<int>> res;
    vector<int> cur;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        res.clear(); cur.clear(); dfs(root, sum); return res;
    }
