#include <iostream>
using namespace std;

// LeetCode #109: Convert Sorted List to Binary Search Tree
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
