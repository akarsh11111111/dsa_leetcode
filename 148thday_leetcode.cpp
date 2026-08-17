#include <iostream>
using namespace std;

// LeetCode #148: Sort List (merge sort)
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* slow=head; ListNode* fast=head->next;
        while (fast && fast->next){ slow=slow->next; fast=fast->next->next; }
        ListNode* mid = slow->next; slow->next = nullptr;
        ListNode* left = sortList(head); ListNode* right = sortList(mid);
        return merge(left,right);
    }
    ListNode* merge(ListNode* a, ListNode* b){
        ListNode dummy(0); ListNode* p=&dummy;
        while (a && b){ if (a->val < b->val){ p->next=a; a=a->next; } else { p->next=b; b=b->next; } p=p->next; }
        p->next = a? a : b; return dummy.next;
    }
};

int main(){ return 0; }
