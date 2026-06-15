#include <string>
#include <vector>
#include <iostream>
using namespace std;

// LeetCode #115: Distinct Subsequences (DP)
class Solution {
public:
    int numDistinct(const string& s, const string& t) {
        int n=s.size(), m=t.size();
        vector<double> dp(m+1,0);
        dp[0]=1;
        for (int i=1;i<=n;i++){
            for (int j=m;j>=1;j--){
                if (s[i-1]==t[j-1]) dp[j] += dp[j-1];
            }
        }
        return (int)dp[m];
    }
};

//int main() { return 0; }
