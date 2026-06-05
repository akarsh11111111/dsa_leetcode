#include <vector>
#include <iostream>
using namespace std;

// LeetCode #108: Convert Sorted Array to Binary Search Tree
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
    TreeNode* build(vector<int>& a,int l,int r){
        if (l>r) return nullptr;
        int m = l + (r-l)/2; TreeNode* root = new TreeNode(a[m]);
        root->left = build(a,l,m-1); root->right = build(a,m+1,r);
        return root;
    }
};

//int main() { return 0; }
