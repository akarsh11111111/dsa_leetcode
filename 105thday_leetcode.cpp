#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #105: Construct Binary Tree from Preorder and Inorder
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

