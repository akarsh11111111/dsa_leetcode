#include <vector>
#include <stack>
#include <iostream>
using namespace std;

// LeetCode #144: Binary Tree Preorder Traversal
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
