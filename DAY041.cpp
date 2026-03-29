// Day 41
// Problem: Count Partitions with Given Difference
// Topic: Dynamic Programming / Subset Sum
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 29/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int countPartitions(vector<int>& arr, int diff) {
        int n = arr.size();
        
        int sum = 0;
        for (int x : arr)
        {
            sum += x;
        }
        
        int total = sum + diff;
        
        // If total is odd or negative, no valid partition
        if (total < 0 || (total % 2 != 0))
        {
            return 0;
        }
        
        int target = total / 2;
        
        vector<int> dp(target + 1, 0);
        dp[0] = 1;
        
        // Subset sum count
        for (int num : arr) {
            for (int s = target; s >= num; s--) {
                dp[s] += dp[s - num];
            }
        }
        
        return dp[target];
    }
};

int main() {
    // test your code here
    return 0;
}