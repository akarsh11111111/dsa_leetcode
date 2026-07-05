#include <string>
#include <vector>
#include <iostream>
using namespace std;

// LeetCode #131: Palindrome Partitioning
class Solution {
public:
    vector<vector<string>> partition(const string& s) {
        int n = s.size();
        vector<vector<string>> res;
        vector<string> cur;
