#include <climits>

using namespace std;

// LeetCode #29: Divide Two Integers
// Divide without using multiplication, division or modulo.
// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
	int divide(int dividend, int divisor) {
		if (dividend == INT_MIN && divisor == -1) {
			return INT_MAX;
		}

		long long a = abs(static_cast<long long>(dividend));
		long long b = abs(static_cast<long long>(divisor));
		int result = 0;
