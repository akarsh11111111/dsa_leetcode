#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #106: Construct Binary Tree from Inorder and Postorder
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
    unordered_map<int,int> idx;
public:
