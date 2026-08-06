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
        ListNode* prev=nullptr; ListNode* cur=slow->next; while (cur){ ListNode* nx=cur->next; cur->next=prev; prev=cur; cur=nx; }
        slow->next = nullptr;
        // merge
        ListNode* p=head; ListNode* q=prev;
        while (q){ ListNode* pn=p->next; ListNode* qn=q->next; p->next=q; q->next=pn; p=pn; q=qn; }
    }
};

int main(){ return 0; }
