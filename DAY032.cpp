// Day 32
// Problem: Predecessor and Successor
// Topic: BST
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 20/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    Node* pred(Node* root) { root=root->left; while(root->right) root=root->right; return root; }
    Node* succ(Node* root) { root=root->right; while(root->left) root=root->left; return root; }
    vector<Node*> findPreSuc(Node* root, int key) {
        Node *p=NULL, *s=NULL, *curr=root;
        while(curr) {
            if(curr->data == key) {
                if(curr->left)  p = pred(curr);
                if(curr->right) s = succ(curr);
                break;
            } else if(curr->data > key) { s=curr; curr=curr->left; }
            else { p=curr; curr=curr->right; }
        }
        return {p, s};
    }
};

int main() {
    // test your code here
    return 0;
}
