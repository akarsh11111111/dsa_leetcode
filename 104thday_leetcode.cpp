#include <iostream>
using namespace std;

// LeetCode #104: Maximum Depth of Binary Tree
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
