#include <algorithm>
#include <limits>
#include <iostream>
using namespace std;

// LeetCode #124: Binary Tree Maximum Path Sum
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };
