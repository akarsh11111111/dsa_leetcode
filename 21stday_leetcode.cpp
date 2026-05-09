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
