#include <vector>
#include <iostream>
using namespace std;

// LeetCode #137: Single Number II (every element appears three times except one)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0, twos=0;
        for (int x: nums){
            ones = (ones ^ x) & ~twos;
            twos = (twos ^ x) & ~ones;
        }
        return ones;
    }
};
