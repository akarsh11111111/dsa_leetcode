#include <string>
#include <cctype>
#include <iostream>
using namespace std;

// LeetCode #125: Valid Palindrome
class Solution {
public:
    bool isPalindrome(const string& s) {
        int i=0,j=s.size()-1;
