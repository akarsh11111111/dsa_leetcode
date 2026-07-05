#include <string>
#include <vector>
#include <limits>
#include <iostream>
using namespace std;

// LeetCode #132: Palindrome Partitioning II (min cuts)
class Solution {
public:
    int minCut(const string& s) {
        int n = s.size();
        if (n<=1) return 0;
