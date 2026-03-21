// Day 30
// Problem: Distribute Candies
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 18/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int solve(Node* root, int &ans) {
        if(root == NULL) return 0;
        int left = solve(root->left, ans), right = solve(root->right, ans);
        ans += abs(left) + abs(right);
        return (left + right + root->data) - 1;
    }
    int distCandy(Node* root) {
        int ans = 0; solve(root, ans); return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
