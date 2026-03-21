// Day 29
// Problem: Burning Tree
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 17/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    Node* findTarget(Node* root, int target, unordered_map<Node*, Node*>& parent) {
        queue<Node*> q; q.push(root);
        Node* targetNode = nullptr;
        while(!q.empty()) {
            Node* node = q.front(); q.pop();
            if(node->data == target) targetNode = node;
            if(node->left)  { parent[node->left]  = node; q.push(node->left); }
            if(node->right) { parent[node->right] = node; q.push(node->right); }
        }
        return targetNode;
    }
    int minTime(Node* root, int target) {
        unordered_map<Node*, Node*> parent;
        Node* targetNode = findTarget(root, target, parent);
        unordered_set<Node*> visited;
        queue<Node*> q;
        q.push(targetNode); visited.insert(targetNode);
        int time = 0;
        while(!q.empty()) {
            int sz = q.size(); bool spread = false;
            for(int i = 0; i < sz; i++) {
                Node* node = q.front(); q.pop();
                if(node->left  && !visited.count(node->left))   { visited.insert(node->left);  q.push(node->left);  spread=true; }
                if(node->right && !visited.count(node->right))  { visited.insert(node->right); q.push(node->right); spread=true; }
                if(parent.count(node) && !visited.count(parent[node])) { visited.insert(parent[node]); q.push(parent[node]); spread=true; }
            }
            if(spread) time++;
        }
        return time;
    }
};

int main() {
    // test your code here
    return 0;
}
