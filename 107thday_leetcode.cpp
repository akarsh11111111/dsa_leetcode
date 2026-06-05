#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #107: Binary Tree Level Order Traversal II
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
