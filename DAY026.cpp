// Day 26
// Problem: Top View of Binary Tree
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 14/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topView(Node *root) {
        if(!root) return {};
        map<int, int> result;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
            auto [node, hd] = q.front(); q.pop();
            if(result.find(hd) == result.end()) result[hd] = node->data;
            if(node->left)  q.push({node->left,  hd-1});
            if(node->right) q.push({node->right, hd+1});
        }
        vector<int> top;
        for(auto& [hd, val] : result) top.push_back(val);
        return top;
    }
};

int main() {
    // test your code here
    return 0;
}
