#include <iostream>
using namespace std;

// LeetCode #116: Populating Next Right Pointers in Each Node (perfect tree)
struct Node { int val; Node* left; Node* right; Node* next; Node(int x): val(x), left(nullptr), right(nullptr), next(nullptr){} };

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        Node* leftmost = root;
        while (leftmost->left){
            Node* head = leftmost;
            while (head){
                head->left->next = head->right;
                if (head->next) head->right->next = head->next->left;
                head = head->next;
            }
            leftmost = leftmost->left;
