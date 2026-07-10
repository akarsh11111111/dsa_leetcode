#include <vector>
#include <iostream>
using namespace std;

// LeetCode #134: Gas Station
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total=0, sum=0, start=0;
