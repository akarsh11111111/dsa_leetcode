#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #105: Construct Binary Tree from Preorder and Inorder
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
    unordered_map<int,int> idx;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i=0;i<inorder.size();++i) idx[inorder[i]] = i;
        return build(preorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
