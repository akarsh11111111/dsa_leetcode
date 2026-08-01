#include <iostream>
using namespace std;

// LeetCode #142: Linked List Cycle II
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while (fast && fast->next){ slow=slow->next; fast=fast->next->next; if (slow==fast) break; }
        if (!fast || !fast->next) return nullptr;
        slow = head;
