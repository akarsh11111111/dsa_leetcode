#include <iostream>
using namespace std;

// LeetCode #61: Rotate List
// Problem: Given the head of a linked list, rotate the list to the right by k places.
// Approach: Make list circular then break at new tail position. Handle k > length.

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;
        int len = 1;
        ListNode* tail = head;
        while (tail->next) { tail = tail->next; ++len; }
        k %= len;
        if (k == 0) return head;
        tail->next = head; // make circular
        int stepsToNewTail = len - k;
        ListNode* newTail = tail;
        while (stepsToNewTail--) newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};
