#include <cstddef>

using namespace std;

// LeetCode #25: Reverse Nodes in k-Group
// Reverse nodes of a linked list k at a time.
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
	ListNode* reverseKGroup(ListNode* head, int k) {
		ListNode dummy(0, head);
		ListNode* prev = &dummy;

		while (true) {
			ListNode* kth = getKth(prev, k);
			if (!kth) break;

			ListNode* nextGroup = kth->next;
			reverse(prev->next, kth);
			ListNode* temp = prev->next;
			prev->next = kth;
			prev = temp;
			temp->next = nextGroup;
		}

		return dummy.next;
	}

private:
	ListNode* getKth(ListNode* curr, int k) {
		while (curr && k > 0) {
			curr = curr->next;
			--k;
		}
		return curr;
