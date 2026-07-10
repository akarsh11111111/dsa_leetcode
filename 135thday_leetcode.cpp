#include <vector>
#include <iostream>
using namespace std;

// LeetCode #135: Candy
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if (n==0) return 0;
        vector<int> left(n,1), right(n,1);
        for (int i=1;i<n;i++) if (ratings[i]>ratings[i-1]) left[i]=left[i-1]+1;
