#include <vector>
#include <iostream>
using namespace std;

// LeetCode #121: Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX, best = 0;
        for (int p: prices){ minp = min(minp,p); best = max(best, p-minp); }
        return best;
