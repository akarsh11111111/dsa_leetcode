#include <iostream>
using namespace std;

// LeetCode #109: Convert Sorted List to Binary Search Tree
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };
struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int x): val(x), left(nullptr), right(nullptr){} };

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head) return nullptr;
        return build(head, nullptr);
    }
    TreeNode* build(ListNode* l, ListNode* r){
        if (l==r) return nullptr;
        ListNode* slow = l; ListNode* fast = l;
        while (fast!=r && fast->next!=r){ slow = slow->next; fast = fast->next->next; }
        TreeNode* node = new TreeNode(slow->val);
        node->left = build(l, slow);
        node->right = build(slow->next, r);
        return node;
    }
};

//int main() { return 0; }
