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
