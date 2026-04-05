// Day 48
// Problem: Target Sum 
// Topic: Dynamic Programming / Subset Sum
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 04/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalWays(vector<int>& arr, int target) {
        
        int sum = 0;
        for (int x : arr)
        {
            sum += x;
        }
    
        int total = (sum + target);
        
        // If total is odd, no valid solution
        if (total % 2 != 0)
        {
            return 0;
        }
        
        int tar = total / 2;
        
        // If target becomes negative
        if (tar < 0) 
        {
            return 0;
        }
        
        vector<int> dp(tar + 1, 0);
        dp[0] = 1;
    
        // Subset sum count
        for (int num : arr) {
            for (int s = tar; s >= num; s--) {
                dp[s] += dp[s - num];
            }
        }
    
        return dp[tar];
    }
};

int main() {
    // test your code here
    return 0;
}