// Day 44
// Problem: Count Binary Strings (No Consecutive 1s)
// Topic: Dynamic Programming / Fibonacci Pattern
// Platform: GeeksforGeeks
// Challenge: 60-Day DSA Challenge sponsored by NPCI
// Date: 31/03/2026

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countStrings(int n) {
        // code here
        
        int pzero = 1;
        int pone = 1;
        
        for(int i = 2; i <= n; i++)
        {
            int zero = pzero + pone;
            int one = pzero;
            
            pzero = zero;
            pone = one;
        }
        
        return pzero + pone;
    }
};

int main() {
    // test your code here
    return 0;
}