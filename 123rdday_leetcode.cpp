#include <vector>
#include <limits>
#include <iostream>
using namespace std;

// LeetCode #123: Best Time to Buy and Sell Stock III (two transactions)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(); if (n<2) return 0;
        vector<int> left(n,0), right(n,0);
        int minp = prices[0];
        for (int i=1;i<n;i++){ minp = min(minp, prices[i]); left[i] = max(left[i-1], prices[i]-minp); }
        int maxp = prices[n-1];
