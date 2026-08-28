#include <string>
using namespace std;

// LeetCode #60: Permutation Sequence
// Problem: Return the k-th permutation sequence of numbers 1..n.
// Approach: Use factorial number system to pick digits greedily.

class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) nums[i] = i+1;
        vector<int> fact(n+1, 1);
        for (int i = 1; i <= n; ++i) fact[i] = fact[i-1]*i;
        --k; // 0-based
        string res;
        for (int i = n; i >= 1; --i) {
            int idx = k / fact[i-1];
            k %= fact[i-1];
            res.push_back(char('0' + nums[idx]));
            nums.erase(nums.begin() + idx);
        }
        return res;
    }
};
