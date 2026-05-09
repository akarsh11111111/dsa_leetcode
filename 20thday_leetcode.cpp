#include <stack>
#include <string>

using namespace std;

// LeetCode #20: Valid Parentheses
// Determine if input string has valid matching brackets.
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
	bool isValid(string s) {
		stack<char> st;

		for (char ch : s) {
			if (ch == '(' || ch == '{' || ch == '[') {
				st.push(ch);
			} else {
				if (st.empty()) {
					return false;
				}

				char top = st.top();
				st.pop();

				if ((ch == ')' && top != '(') ||
					(ch == '}' && top != '{') ||
					(ch == ']' && top != '[')) {
					return false;
				}
			}
		}

		return st.empty();
	}
