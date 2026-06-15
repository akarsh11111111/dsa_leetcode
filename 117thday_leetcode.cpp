#include <queue>
#include <iostream>
using namespace std;

// LeetCode #117: Populating Next Right Pointers in Each Node II
struct Node { int val; Node* left; Node* right; Node* next; Node(int x): val(x), left(nullptr), right(nullptr), next(nullptr){} };

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        Node* head = root;
        while (head){
            Node dummy(0); Node* tail = &dummy; Node* cur = head; head = nullptr;
            while (cur){
                if (cur->left){ tail->next = cur->left; tail = tail->next; if (!head) head = tail; }
                if (cur->right){ tail->next = cur->right; tail = tail->next; if (!head) head = tail; }
                cur = cur->next;
            }
        }
        return root;
    }
};

//int main() { return 0; }
