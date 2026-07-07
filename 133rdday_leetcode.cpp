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
