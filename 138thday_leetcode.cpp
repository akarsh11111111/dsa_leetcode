#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #138: Copy List with Random Pointer
class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int _val): val(_val), next(nullptr), random(nullptr){}
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;
        unordered_map<Node*, Node*> m;
        Node* cur = head;
        while (cur){ m[cur] = new Node(cur->val); cur = cur->next; }
        cur = head;
        while (cur){ m[cur]->next = m[cur->next]; m[cur]->random = m[cur->random]; cur = cur->next; }
        return m[head];
    }
};

int main(){ return 0; }
