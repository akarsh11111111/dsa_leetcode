#include <string>
using namespace std;

// LeetCode #58: Length of Last Word
// Problem: Given a string s consisting of words and spaces, return the length of the last word.
// Approach: Trim trailing spaces and count characters until next space.

class Solution {
public:
    int lengthOfLastWord(const string& s) {
        int i = s.size()-1;
        while (i >= 0 && s[i] == ' ') --i;
        int len = 0;
        while (i >= 0 && s[i] != ' ') { --i; ++len; }
        return len;
    }
};
