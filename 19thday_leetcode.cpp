#include <cstddef>

using namespace std;

// LeetCode #19: Remove Nth Node From End of List
// Remove the nth node from end of linked list.
// Time Complexity: O(n)
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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode dummy(0, head);
		ListNode* first = &dummy;
		ListNode* second = &dummy;

		for (int i = 0; i <= n; ++i) {
			first = first->next;
		}

		while (first != nullptr) {
			first = first->next;
			second = second->next;
		}

		second->next = second->next->next;
		return dummy.next;
	}
};
