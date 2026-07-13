#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

// LeetCode #136: Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0; for (int v: nums) x ^= v; return x;
    }
