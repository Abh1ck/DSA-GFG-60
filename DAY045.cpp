// Day 45
// Problem: Painting Fence
// Topic: Dynamic Programming / State Optimization
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 01/04/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countWays(int n, int k) {
        
        if (n == 1) return k;
    
        int same = k;
        int diff = k * (k - 1);
    
        for (int i = 3; i <= n; i++) {
            int newSame = diff;
            int newDiff = (same + diff) * (k - 1);
    
            same = newSame;
            diff = newDiff;
        }
    
        return same + diff;
    }
};

int main() {
    // test your code here
    return 0;
}