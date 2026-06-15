#include <queue>
#include <iostream>
using namespace std;

// LeetCode #117: Populating Next Right Pointers in Each Node II
struct Node { int val; Node* left; Node* right; Node* next; Node(int x): val(x), left(nullptr), right(nullptr), next(nullptr){} };

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
