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
