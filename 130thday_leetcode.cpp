#include <vector>
#include <queue>
#include <iostream>
using namespace std;

// LeetCode #130: Surrounded Regions
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        int m = board.size(), n = board[0].size();
        queue<pair<int,int>> q;
        for (int i=0;i<m;i++){
            if (board[i][0]=='O') { board[i][0]='T'; q.push({i,0}); }
            if (board[i][n-1]=='O') { board[i][n-1]='T'; q.push({i,n-1}); }
        }
        for (int j=0;j<n;j++){
            if (board[0][j]=='O') { board[0][j]='T'; q.push({0,j}); }
            if (board[m-1][j]=='O') { board[m-1][j]='T'; q.push({m-1,j}); }
        }
        int dirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        while (!q.empty()){
            auto [x,y]=q.front(); q.pop();
