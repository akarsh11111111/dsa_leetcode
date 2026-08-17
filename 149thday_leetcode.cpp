#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;

// LeetCode #149: Max Points on a Line
class Solution {
    int gcd(int a,int b){ return b==0? a: gcd(b, a%b); }
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size(); if (n<3) return n;
        int best=0;
        for (int i=0;i<n;i++){
            unordered_map<long long,int> cnt; int dup=0, curmax=0;
            for (int j=i+1;j<n;j++){
                int dx = points[j][0]-points[i][0];
                int dy = points[j][1]-points[i][1];
                if (dx==0 && dy==0){ dup++; continue; }
                int g = gcd(abs(dx), abs(dy)); dx /= g; dy /= g;
                if (dx<0){ dx=-dx; dy=-dy; }
                else if (dx==0 && dy<0) dy = -dy;
                long long key = ((long long)dx<<32) ^ (unsigned int)dy;
                curmax = max(curmax, ++cnt[key]);
            }
            best = max(best, curmax + dup + 1);
        }
        return best;
    }
};

int main(){ return 0; }
