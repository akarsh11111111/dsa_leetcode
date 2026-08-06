#include <iostream>
using namespace std;

// LeetCode #143: Reorder List
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };

class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        // find middle
        ListNode *slow=head, *fast=head;
        while (fast->next && fast->next->next){ slow=slow->next; fast=fast->next->next; }
        // reverse second
