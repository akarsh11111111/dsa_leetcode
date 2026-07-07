#include <vector>
#include <queue>
#include <unordered_map>
#include <iostream>
using namespace std;

// LeetCode #133: Clone Graph
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(): val(0) {}
    Node(int _val): val(_val) {}
    Node(int _val, vector<Node*> _neighbors): val(_val), neighbors(_neighbors) {}
};

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;
