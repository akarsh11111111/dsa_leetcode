#include <vector>
#include <queue>

using namespace std;

// LeetCode #23: Merge k Sorted Lists
// Merge k sorted linked lists into one sorted list.
// Time Complexity: O(n log k)
// Space Complexity: O(k)
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	explicit ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}
};

class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		if (lists.empty()) return nullptr;

		auto cmp = [](ListNode* a, ListNode* b) {
			return a->val > b->val;
		};
		priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> pq(cmp);

		for (ListNode* list : lists) {
			if (list) pq.push(list);
		}

		ListNode dummy(0);
		ListNode* tail = &dummy;

		while (!pq.empty()) {
			ListNode* node = pq.top();
			pq.pop();
			tail->next = node;
			tail = tail->next;

			if (node->next) {
				pq.push(node->next);
			}
