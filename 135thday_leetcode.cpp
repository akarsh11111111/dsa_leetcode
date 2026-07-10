#include <vector>
#include <iostream>
using namespace std;

// LeetCode #135: Candy
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n==0) return 0;
