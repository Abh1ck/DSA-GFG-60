// Day 27
// Problem: Vertical Tree Traversal
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 15/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        map<int, vector<int>> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()) {
            auto it = q.front(); q.pop();
            Node* node = it.first; int level = it.second;
            mp[level].push_back(node->data);
            if(node->left)  q.push({node->left,  level-1});
            if(node->right) q.push({node->right, level+1});
        }
        for(auto it : mp) ans.push_back(it.second);
        return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
