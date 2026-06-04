#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #106: Construct Binary Tree from Inorder and Postorder
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
    unordered_map<int,int> idx;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& post) {
        for (int i=0;i<inorder.size();++i) idx[inorder[i]] = i;
        return build(inorder, 0, inorder.size()-1, post, 0, post.size()-1);
    }
    TreeNode* build(vector<int>& in,int il,int ir, vector<int>& post,int pl,int pr){
        if (pl>pr) return nullptr;
        int rootVal = post[pr]; TreeNode* root = new TreeNode(rootVal);
        int k = idx[rootVal]; int leftSize = k - il;
        root->left = build(in, il, k-1, post, pl, pl+leftSize-1);
        root->right = build(in, k+1, ir, post, pl+leftSize, pr-1);
        return root;
    }
};

//int main() { return 0; }
