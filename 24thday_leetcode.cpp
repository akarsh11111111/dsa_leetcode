#include <cstddef>

using namespace std;

// LeetCode #24: Swap Nodes in Pairs
// Swap adjacent nodes in a linked list.
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
	ListNode* swapPairs(ListNode* head) {
		ListNode dummy(0, head);
		ListNode* prev = &dummy;

		while (prev->next && prev->next->next) {
			ListNode* first = prev->next;
			ListNode* second = prev->next->next;

