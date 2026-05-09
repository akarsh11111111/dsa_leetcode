#include <cstddef>

using namespace std;

// LeetCode #21: Merge Two Sorted Lists
// Merge two sorted linked lists into one sorted list.
// Time Complexity: O(n + m)
// Space Complexity: O(1)
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	explicit ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode dummy(0);
		ListNode* tail = &dummy;

		while (list1 && list2) {
			if (list1->val <= list2->val) {
				tail->next = list1;
