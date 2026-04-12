#include <vector>

using namespace std;

// LeetCode #2: Add Two Numbers
// Aapko 2 linked lists di jaati hain: l1 aur l2.
// Har node me ek digit hota hai, aur number reverse order me stored hota hai.
// Hume in dono numbers ka sum bhi linked list ke form me return karna hai.

// Example:
// l1 = [2,4,3]  -> number 342
// l2 = [5,6,4]  -> number 465
// sum = 807
// output = [7,0,8]

// Note:
// 1) Digits reverse order me hain.
// 2) Har node me single digit (0-9) hota hai.
// 3) Result list me bhi reverse order follow hoga.

// LeetCode usually ye struct already deta hai.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Approach: Digit-by-digit addition with carry (exactly jaise normal addition karte hain).
// 1) Dono lists ko same time traverse karo.
// 2) Current digits + carry ka sum nikalo.
// 3) sum % 10 new node banega, sum / 10 next carry banega.
// 4) Jab dono lists khatam ho jayein aur carry bhi 0 ho, loop end.
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m)) for output list (extra auxiliary apart from output is O(1)).
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		// Dummy node use karne se head handle karna easy ho jata hai.
		ListNode dummy(0);

		// tail hamesha result list ke last node ko point karega.
		ListNode* tail = &dummy;

		// carry previous digit addition ka carry value rakhega.
		int carry = 0;

		// Jab tak l1 ya l2 me nodes bache hain, ya carry bacha hai, tab tak process karo.
		while (l1 != nullptr || l2 != nullptr || carry != 0) {
			int x = 0;
			int y = 0;

			// Agar l1 valid hai to uska digit lo.
			if (l1 != nullptr) {
				x = l1->val;
				l1 = l1->next;
			}

			// Agar l2 valid hai to uska digit lo.
			if (l2 != nullptr) {
				y = l2->val;
				l2 = l2->next;
			}

			// Current addition: dono digits + carry.
			int sum = x + y + carry;

			// Next carry tens place se aata hai.
			carry = sum / 10;

			// Current digit ones place hoga.
			int digit = sum % 10;

			// Result list me new digit node attach karo.
			tail->next = new ListNode(digit);
			tail = tail->next;
		}

		// Dummy ke next se actual result head milta hai.
		return dummy.next;
	}
};
