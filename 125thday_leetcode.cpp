#include <string>
#include <cctype>
#include <iostream>
using namespace std;

// LeetCode #125: Valid Palindrome
class Solution {
public:
    bool isPalindrome(const string& s) {
        int i=0,j=s.size()-1;
        while (i<j){
            while (i<j && !isalnum((unsigned char)s[i])) i++;
            while (i<j && !isalnum((unsigned char)s[j])) j--;
            if (tolower(s[i])!=tolower(s[j])) return false;
            i++; j--;
        }
        return true;
    }
};

