#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #103: Binary Tree Zigzag Level Order Traversal
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
