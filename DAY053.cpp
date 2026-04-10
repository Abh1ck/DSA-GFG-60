// Day 53
// Problem: Increasing Triplet Subsequence
// Topic: Greedy / Arrays
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 09/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        
        int n = arr.size();
        if (n < 3) return {};
    
        int first = INT_MAX, second = INT_MAX;
        int potential_first = INT_MAX;
    
        for (int i = 0; i < n; i++) {
            if (arr[i] <= potential_first) {
                potential_first = arr[i];
            }
            else if (arr[i] <= second) {
                first = potential_first;
                second = arr[i];
            }
            else {
                return {first, second, arr[i]};
            }
        }
    
        return {};
    }
};

int main() {
    // test your code here
    return 0;
}