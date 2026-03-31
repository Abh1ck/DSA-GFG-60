// Day 43
// Problem: Maximum Profit with Transaction Fee
// Topic: Dynamic Programming / State Machine
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 31/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        int pbs = -arr[0]; // previous buy state
        int pss = 0;       // previous sell state
        
        for(int i = 1; i < n; i++)
        {
            // buy state
            int tbs = max(pbs, pss - arr[i]);

            // sell state
            int tss = max(pss, pbs + arr[i] - k);

            pbs = tbs;
            pss = tss;
        }

        return pss;
    }
};

int main() {
    // test your code here
    return 0;
}