#include <vector>
#include <iostream>
using namespace std;

// LeetCode #122: Best Time to Buy and Sell Stock II (sum positive diffs)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        for (int i=1;i<prices.size();++i) if (prices[i]>prices[i-1]) res += prices[i]-prices[i-1];
        return res;
    }
