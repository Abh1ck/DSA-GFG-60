// Day 28
// Problem: K Sum Paths
// Topic: Trees
// Platform: GeeksforGeeks POTD
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 16/03/2025

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(Node* node, int k, int runningSum, int &result, unordered_map<int,int> &prefixCount) {
        if(!node) return;
        runningSum += node->data;
        if(prefixCount.find(runningSum - k) != prefixCount.end())
            result += prefixCount[runningSum - k];
        prefixCount[runningSum]++;
        dfs(node->left,  k, runningSum, result, prefixCount);
        dfs(node->right, k, runningSum, result, prefixCount);
        prefixCount[runningSum]--;
    }
    int countAllPaths(Node* root, int k) {
        unordered_map<int,int> prefixCount;
        prefixCount[0] = 1;
        int result = 0;
        dfs(root, k, 0, result, prefixCount);
        return result;
    }
};

int main() {
    // test your code here
    return 0;
}
