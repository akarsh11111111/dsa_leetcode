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
