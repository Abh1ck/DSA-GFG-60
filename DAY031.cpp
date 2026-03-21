// Day 31
// Problem: Largest BST
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 19/03/2025

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
  public:
    pair<pair<ll,ll>,pair<bool,ll>> solve(Node* node, ll &ans) {
        if(node == NULL) return {{LLONG_MAX, LLONG_MIN},{true,0}};
        auto left = solve(node->left, ans), right = solve(node->right, ans);
        if(!left.second.first || !right.second.first) return {{0,0},{false,0}};
        if(node->data <= left.first.second || node->data >= right.first.first) return {{0,0},{false,0}};
        ans = max(ans, left.second.second + right.second.second + 1);
        return {{min({left.first.first,right.first.first,1LL*node->data}),
                 max({left.first.second,right.first.second,1LL*node->data})},
                {true, left.second.second+right.second.second+1}};
    }
    int largestBst(Node *root) {
        ll ans = 0; solve(root, ans); return ans;
    }
};

int main() {
    // test your code here
    return 0;
}
