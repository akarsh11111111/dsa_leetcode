#include <climits>

using namespace std;

// LeetCode #50: Pow(x, n)
// Compute x raised to power n.
// Time Complexity: O(log n)
// Space Complexity: O(log n)
class Solution {
public:
	double myPow(double x, int n) {
		long long N = n;
		if (N < 0) {
			x = 1 / x;
			N = -N;
		}

		return fastPow(x, N);
	}

private:
	double fastPow(double x, long long n) {
		if (n == 0) {
			return 1.0;
		}

		double half = fastPow(x, n / 2);
