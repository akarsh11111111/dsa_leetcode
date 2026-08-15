#include <iostream>
using namespace std;

// LeetCode #147: Insertion Sort List
struct ListNode { int val; ListNode* next; ListNode(int x): val(x), next(nullptr){} };

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(0); ListNode* cur = head;
        while (cur){
            ListNode* prev = &dummy;
            while (prev->next && prev->next->val < cur->val) prev = prev->next;
            ListNode* nxt = cur->next;
            cur->next = prev->next; prev->next = cur;
            cur = nxt;
        }
        return dummy.next;
    }
};

int main(){ return 0; }
